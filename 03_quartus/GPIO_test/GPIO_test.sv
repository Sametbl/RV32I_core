module GPIO_test(
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


assign GPO[9:0]  = SW[9:0];
assign LEDR[9:0] = GPI[9:0];

endmodule 