module processor_tb;

reg        clk_i;
reg        rst_n;
reg [31:0] sw_tb;
reg [31:0] input_port_tb;
reg [31:0] output_port_A_tb;
reg [31:0] output_port_B_tb;
reg [31:0] output_port_C_tb;
reg [31:0] output_port_D_tb;


reg [31:0] clk_counter;

processor   dut (
    .clk_i        (clk_i           ),
    .rst_n        (rst_n           ),
    .input_switch (sw_tb           ),   
    .input_port   (input_port_tb   ),   
    .output_port_A(output_port_A_tb),  
    .output_port_B(output_port_B_tb),  
    .output_port_C(output_port_C_tb),                   
    .output_port_D(output_port_D_tb),       
    .debug_next_PC_d(),
    .debug_next_PC_q(),
    .debug_PC_at_ID(),
    .debug_PC_at_ALU(),  
    .debug_pc_sel(),        // LEDR[5:4]
    .debug_branch_taken(),  // LEDR[3]
    .debug_prd_en(),  // LEDR[2]
    .debug_branch_miss(),   // LEDR[1]
    .debug_stall()          // LEDR[0]            
);



always_ff @(posedge clk_i, negedge rst_n) begin
        if(!rst_n)          clk_counter <= 0;
        else                clk_counter <= clk_counter + 1;     
end


initial begin
    $dumpfile("wave.vcd");
    $dumpvars(0, dut);
end

initial begin
     #0          clk_i = 1;
     forever #20 clk_i = ~clk_i;
end

initial begin
    #0   rst_n = 1'b0;       
    #40; rst_n = 1'b1;       
end

// initial begin
//     #0      input_port_tb = 32'd0;       
//     #24000; input_port_tb = 32'd1;    
//     #1000000;  input_port_tb = 32'd0;    
// end
  
initial begin
    #0                  sw_tb = 32'h0000_0000; 
    #100;  forever #200 sw_tb = $random;  
end

initial begin
    #0                  input_port_tb = 32'h0000_0000; 
    #100;  forever #2000 input_port_tb = $random;  
end
initial begin
  #20000;     
    $finish;
end


endmodule

