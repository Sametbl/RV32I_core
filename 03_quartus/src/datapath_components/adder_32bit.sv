module adder_32bit (
  input  logic [31:0] a,         // Operand A
  input  logic [31:0] b,         // Operand B
  input  logic        sub,       // 0: Add, 1: Subtract (A - B)
  output logic [31:0] sum,       // Result
  output logic        cout       // Carry or borrow out
);
  logic [32:0] result;
  logic [31:0] b_tmp;
  logic        cin;

  // Prepare B and carry for subtraction if needed
  assign b_tmp = sub ? ~b : b;        // Complement B if subtracting
  assign cin   = sub ? 1'b1 : 1'b0;    // Add 1 if subtracting (2’s complement)

  // Perform addition
  assign result = {1'b0, a} + {1'b0, b_tmp} + {32'b0, cin};

  // Assign outputs
  assign sum  = result[31:0];
  assign cout = result[32];

endmodule
