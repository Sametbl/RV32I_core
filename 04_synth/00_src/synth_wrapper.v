module synth_wrapper(
   input  wire       clk,
   input  wire       rst_n,
   input  wire [7:0] A,       // 8-bit inputs
   input  wire [7:0] B,       // 8-bit inputs
   input  wire [2:0] op_sel,  // 3-bit operation selections
   output reg  [7:0] result,
   output reg        carry  
);

reg [7:0] A_reg;
reg [7:0] B_reg;
reg [2:0] op_sel_reg;
reg [7:0] result_reg;
reg       carry_reg;

always@(posedge clk, negedge rst_n) begin
   if(!rst_n) begin
         A_reg      <= 8'h00;
         B_reg      <= 8'h00;
         op_sel_reg <= 3'b000;
         result     <= 8'h00;
         carry      <= 1'b0;
   end
   else begin
         A_reg      <= A;       // Input
         B_reg      <= B;       // Input
         op_sel_reg <= op_sel;  // Input
         result     <= result_reg;   // Output
         carry      <= carry_reg;  // Output
   end
end

alu_8bit     dutty (
      .i_clk   (clk       ),
      .i_rstn  (rst_n     ),
      .i_a     (A_reg     ),
      .i_b     (B_reg     ),
      .i_op_sel(op_sel_reg),
      .o_result(result_reg),
      .o_carry (carry_reg )
);


endmodule
