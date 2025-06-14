module processor_wrapper(
	input  logic        CLOCK_50,
	input  logic [3:0]  KEY,
	input  logic [9:0]  SW,
	input  logic [9:0]  GPI,
	output logic [25:0] GPO,
	output logic [9:0]  LEDR,
	output logic [6:0]  HEX0,
	output logic [6:0]  HEX1,       
	output logic [6:0]  HEX2,
	output logic [6:0]  HEX3,
	output logic [6:0]  HEX4,
	output logic [6:0]  HEX5
);

// SW[9]:  1'b0 - Manual CLOCK (KEY[1]),   1'b1 - CLOCK division
// SW[8]:  1'b0 - Display PORTs data   ,   1'b1 - Display PC (based on SW[7]) 
// SW[7:6]:  2'b00 - PC = next_pc_d  
//           2'b01 - PC = next_pc_q
//           2'b10 - PC = next_pc_ID
//           2'b11 - PC = next_pc_EX

// SW[5:0]: Input Peripheral data

// KEY[0]: RESET
// KEY[1]: Manual CLOCK button
// KEY[2]: PORTs select 
// KEY[3]: Stop CLOCK (For clock DIV)
// LEDR[6] - PORTA selected
// LEDR[7] - PORTB selected
// LEDR[8] - PORTC selected
// LEDR[9] - PORTD selected

// LEDR[0]   - Stall flags
// LEDR[1]   - Branch miss flag
// LEDR[2]   - Branch/ PRD en flag
// LEDR[3]   - Branch Taken flag
// LEDR[5:4] - PC_sel signal

wire         rst_n;
wire [31:0]  proc_SW;       // Input
wire [31:0]  proc_GPI;
wire [31:0]  proc_GPO_A;
wire [31:0]  proc_GPO_B;
wire [31:0]  proc_GPO_C;
wire [31:0]  proc_GPO_D;
wire [31:0]  debug_next_PC_d;
wire [31:0]  debug_next_PC_q;
wire [31:0]  debug_PC_at_ID;
wire [31:0]  debug_PC_at_ALU;
wire [31:0]  debug_PC;
wire [3:0]   debug_valid_bit;

logic [31:0] GPO_data;
logic [31:0] display_data;
logic [1:0]  PORT_sel;

logic        PORT_sel_clk;
logic        clk_div;            // Slower clock for debugging CPU 
logic        clk_manual;         // Manual clock for debugging CPU (KEY[1])
logic        clk_selected;
logic        clk_main;

assign rst_n      =  KEY[0];
assign proc_SW    = {26'b0, SW[5:0] };
assign proc_GPI   = {20'b0, GPI[9:0], ~KEY[3], ~KEY[2]};
assign GPO[25:0]  = proc_GPO_A[25:0];

processor   CPU (
      .clk_i        (CLOCK_50  ),
      .rst_n        (rst_n     ),
      .input_switch (proc_SW   ),  
      .input_port   (proc_GPI  ),  
      .output_port_A(proc_GPO_A),  
      .output_port_B(proc_GPO_B),  
      .output_port_C(proc_GPO_C),  
      .output_port_D(proc_GPO_D),
      // DEBUG 
      .debug_next_PC_d   (debug_next_PC_d),
      .debug_next_PC_q   (debug_next_PC_q),
      .debug_PC_at_ID    (debug_PC_at_ID),
      .debug_PC_at_ALU   (debug_PC_at_ALU),
      //.debug_valid_bit   (debug_valid_bit),
      .debug_pc_sel      (LEDR[5:4])      ,
      .debug_branch_taken(LEDR[3])        ,
      .debug_prd_en      (LEDR[2])        ,
      .debug_branch_miss (LEDR[1])        ,
      .debug_stall       (LEDR[0])        
);

// Select PC data in execute stage
mux_2x1   Display_sleect  (
        .sel  (SW[8]          ),
        .i_0  (GPO_data       ),  
        .i_1  (debug_next_PC_q),                                               
        .o_mux(display_data   )
);

// Displaying data on HEXs
mux_4x1   GPO_select  (
        .sel  (SW[7:6]     ),
        .i_0  (proc_GPO_A  ),  
        .i_1  (proc_GPO_B  ),       
        .i_2  (proc_GPO_C  ),               
        .i_3  (proc_GPO_D  ),                                           
        .o_mux(GPO_data    )
);


bin32_to_bcd_display   display_to_HEX  (
    	.i_bin		(display_data),     
    	.o_segment_0(HEX0        ),
    	.o_segment_1(HEX1        ),
    	.o_segment_2(HEX2        ),
    	.o_segment_3(HEX3        ),
    	.o_segment_4(HEX4        ),
    	.o_segment_5(HEX5        )
);


endmodule



// bin32_to_bcd_display
    module bin32_to_bcd_display (
        input  logic [31:0] i_bin      ,     
        output logic [6:0]  o_segment_0,
        output logic [6:0]  o_segment_1,
        output logic [6:0]  o_segment_2,
        output logic [6:0]  o_segment_3,
        output logic [6:0]  o_segment_4,
        output logic [6:0]  o_segment_5
    );

    logic [31:0] bcd_digits_0;
    logic [31:0] bcd_digits_1;
    logic [31:0] bcd_digits_2;
    logic [31:0] bcd_digits_3;
    logic [31:0] bcd_digits_4;
    logic [31:0] bcd_digits_5;
    integer     value;

    assign value = i_bin;

    assign bcd_digits_5 = (value / 100000)   % 10;
    assign bcd_digits_4 = (value / 10000)    % 10;
    assign bcd_digits_3 = (value / 1000)     % 10;
    assign bcd_digits_2 = (value / 100)      % 10;
    assign bcd_digits_1 = (value / 10)       % 10;
    assign bcd_digits_0 =  value             % 10;

    // Manually instantiate bcdtohex for each digit
    bcdtohex u0 (.bcd(bcd_digits_0[3:0]), .segment(o_segment_0));
    bcdtohex u1 (.bcd(bcd_digits_1[3:0]), .segment(o_segment_1));
    bcdtohex u2 (.bcd(bcd_digits_2[3:0]), .segment(o_segment_2));
    bcdtohex u3 (.bcd(bcd_digits_3[3:0]), .segment(o_segment_3));
    bcdtohex u4 (.bcd(bcd_digits_4[3:0]), .segment(o_segment_4));
    bcdtohex u5 (.bcd(bcd_digits_5[3:0]), .segment(o_segment_5));


    endmodule

