module testbench;
reg        clk;
reg        rst_n;
reg [7:0]  A;
reg [7:0]  B;
reg [2:0]  op_sel;

wire [7:0] result;
wire       carry;

synth_wrapper my_dutty (
   .clk   (clk   ),
   .rst_n (rst_n ),
   .A     (A     ),
   .B     (B     ),
   .op_sel(op_sel),
   .result(result),
   .carry (carry )
);

integer   passed = 0;
integer   failed = 0;
integer   a_val;
integer   b_val;
reg [7:0] expected_result;
reg       expected_carry;
string    GREEN = "\033[1;96m \033[32m";
string    RED   = "\033[1;96m \033[31m";
string    BLUE  = "\033[1;96m \033[94m";
string    RESET = "\033[0m";
string    op_name [0:7];
initial begin
   op_name[3'b000] = "ADD";
   op_name[3'b001] = "SUB";
   op_name[3'b010] = "AND";
   op_name[3'b011] = "OR ";
   op_name[3'b100] = "XOR";
   op_name[3'b101] = "NOT";
   op_name[3'b110] = "SRL";
   op_name[3'b111] = "SLL";
end

initial begin
   $shm_open("waves.shm");
   $shm_probe("AS");
end

// // Waveform dumping fcr Verilator 
// initial begin : proc_dump
//     $dumpfile("wave.vcd");
//     $dumpvars(0, my_dutty);
// end


always #5 clk <= ~clk;

initial begin
   clk   = 0;
   rst_n = 0;
   #12
   rst_n = 1;                 // release active-low reset
end


initial begin : MAIN

   // wait until reset de-asserted
   @(posedge rst_n);

   // loop through every op_sel, 256x256 exhaustive test
   for (int i = 0; i < 8; i++) begin
      op_sel = i[2:0];
      for (a_val = 0; a_val < 256; a_val++) begin
         for (b_val = 0; b_val < 256; b_val++) begin
            @(posedge clk);   
            A = a_val[7:0];  // exhaustively test all A
            B = b_val[7:0];  // exhaustively test all B

            // Calculate expected values
            calc_expected(op_sel, A, B, expected_result, expected_carry);

            @(posedge clk); // Wait fpr synth_wrapper to fetch inputs
            @(posedge clk); // Wait for alu_8bit to sample input
            @(posedge clk); // Wait for alu_8bit to samepl output
            @(posedge clk); // Wait for synth_wrapper to samppler output
            #9;  

            // Choose display radix (unsigned dec for ADD and SUB)
            if (op_sel <= 3'b001) begin 
               if ((result === expected_result) && (carry === expected_carry)) begin
                  $display("%sPASSED%s  op_sel = %b (%s)\t| A = %0d   \tB = %0d\t=>  result = %0d  \tcarry = %0b",
                           GREEN, RESET, op_sel, op_name[op_sel],
                           A, B, result, carry);
                  passed = passed + 1;
               end
               else begin
                  $display("%sFAILED%s  op_sel = %b (%s)\t| A = %0d   \tB = %0d\t=>  result = %0d\t(expected %0d)\tcarry = %0b\t(expected %0b)",
                           RED, RESET, op_sel, op_name[op_sel],
                           A, B, result, expected_result, carry, expected_carry);
                  failed = failed + 1;
               end
            end
            else begin                  // logical ops → binary
               if ((result === expected_result) && (carry === expected_carry)) begin
                  $display("%sPASSED%s  op_sel = %b (%s)\t| A = %b\tB = %b\t=>  result = %b\tcarry = %0d",
                           GREEN, RESET, op_sel, op_name[op_sel],
                           A, B, result, carry);
                  passed = passed + 1;
               end
               else begin
                  $display("%sFAILED%s  op_sel=%b (%s)\t| A=%b\tB=%b  =>\tresult=%b\t(expected %b)\tcarry=%0d\t(expected %0d)",
                           RED, RESET, op_sel, op_name[op_sel],
                           A, B, result, expected_result, carry, expected_carry);
                  failed = failed + 1;
               end
            end
         end
      end
   end

   $display("%s------------- Group 6 test result ------------", BLUE);
   $display("TOTAL: %s%s%0d passed%s, %s%0d failed%s", RESET, GREEN, passed, RESET, RED, failed, RESET);
   $finish;
end




task automatic calc_expected (
   input  [2:0] op,
   input  [7:0] a,
   input  [7:0] b,
   output [7:0] res,
   output       car
);
   reg [8:0] tmp;
   begin 
      case (op)
         3'b000: begin                                // ADD
            tmp = a + b;
            res = tmp[7:0];
            car = tmp[8];
         end
         3'b001: begin                                // SUB
            tmp = {1'b0,a} - {1'b0,b}; // extend to keep borrow
            res = tmp[7:0];
            car = (a >= b);            // borrow flag (0 if borrow)
         end
         3'b010:  begin res = a & b;    car = 0; end // AND
         3'b011:  begin res = a | b;    car = 0; end // OR
         3'b100:  begin res = a ^ b;    car = 0; end // XOR
         3'b101:  begin res = ~a;       car = 0; end // NOT
         3'b110:  begin res = a >> b;   car = 0; end // RIGHT SHIFT
         3'b111:  begin res = a << b;   car = 0; end // LEFT  SHIFT
         default: begin res = 8'h00;    car = 0; end //
      endcase
   end
endtask

endmodule
