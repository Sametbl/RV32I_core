module not_gate_8bit(A, S);
input  [7:0] A;
output [7:0] S;

not  bit0(S[0], A[0]);
not  bit1(S[1], A[1]);
not  bit2(S[2], A[2]);
not  bit3(S[3], A[3]);
not  bit4(S[4], A[4]);
not  bit5(S[5], A[5]);
not  bit6(S[6], A[6]);
not  bit7(S[7], A[7]);

endmodule


