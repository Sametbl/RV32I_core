module xor_gate_8bit(A, B, S);
input  [7:0] A;
input  [7:0] B;
output [7:0] S;

xor  bit0(S[0], A[0],B[0]);
xor  bit1(S[1], A[1],B[1]);
xor  bit2(S[2], A[2],B[2]);
xor  bit3(S[3], A[3],B[3]);
xor  bit4(S[4], A[4],B[4]);
xor  bit5(S[5], A[5],B[5]);
xor  bit6(S[6], A[6],B[6]);
xor  bit7(S[7], A[7],B[7]);


endmodule


