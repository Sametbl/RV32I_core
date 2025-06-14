module fulladder(A, B, Ci, S, Co);
  input    A;
  input    B;
  input    Ci;
  output   S;
  output   Co;

  wire     w1,w2,w3;
  //Structural code for one bit full adder
  // Output S:
  xor G1(w1, A, B );
  xor G2(S, w1, Ci);

  // Output Cout:
  and G3(w2, w1, Ci);
  and G4(w3, A , B );
  or  G5(Co, w2, w3);
endmodule
