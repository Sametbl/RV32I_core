module and_gate_8bit(A, B, S);
input  [7:0] A;
input  [7:0] B;
output [7:0] S;

and  bit0(S[0], A[0],B[0]);
and  bit1(S[1], A[1],B[1]);
and  bit2(S[2], A[2],B[2]);
and  bit3(S[3], A[3],B[3]);
and  bit4(S[4], A[4],B[4]);
and  bit5(S[5], A[5],B[5]);
and  bit6(S[6], A[6],B[6]);
and  bit7(S[7], A[7],B[7]);

endmodule


