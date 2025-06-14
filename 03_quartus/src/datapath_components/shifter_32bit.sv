module shifter_32bit(
    input  logic [31:0] data_in,
    input  logic [31:0] shift_amount,
    input  logic [1:0]  mode,
    output logic [31:0] data_out
);
logic [31:0] bin_in;       // 32-bit Binary for Right Shift operation 
logic [31:0] reversed_in;  // Initial 32-bit reversed Binary for Left shift
logic [31:0] reversed_out; // Final   32-bit reversed Binart for Left shift

logic [31:0] shift_R1;   // Data that has been right shifted by 1  position
logic [31:0] shift_R2;   // Data that has been right shifted by 2  positions
logic [31:0] shift_R4;   // Data that has been right shifted by 4  positions
logic [31:0] shift_R8;   // Data that has been right shifted by 8  positions
logic [31:0] shift_R16;  // Data that has been right shifted by 16 positions

logic [31:0] mux_R1;     // Selected data of based on shift_amount[0] bit
logic [31:0] mux_R2;     // Selected data of based on shift_amount[1] bit
logic [31:0] mux_R4;     // Selected data of based on shift_amount[2] bit
logic [31:0] mux_R8;     // Selected data of based on shift_amount[3] bit
logic [31:0] mux_R16;    // Selected data of based on shift_amount[4] bit

logic left_logic_mode;  // indicate Logical Left shift mode 
logic right_arith_mode; // indicate Right Arithmetic shift mode
logic reserved_mode;    // indicate Reserved mode
logic shift_in_bit;     // Specify shift-in bit
logic out_of_range;     // indicate a more than 32 shift in position

                                                 // mode = 2'b00 : shift Right logic (Default)
assign left_logic_mode  = ~mode[1] &  mode[0];   // mode = 2'b01 : shift Left  logic
assign right_arith_mode =  mode[1] & ~mode[0];   // mode = 2'b10 : shift Right Arithmetic
assign reserved_mode    =  mode[1] &  mode[0];   // mode = 2'b11 : reserved_mode

assign shift_in_bit = right_arith_mode & data_in[31];  // For Right shift arithmetic, shift_in_bit = Sign_bit

assign out_of_range = |(shift_amount[31:5]);  // Any bit above bit[4] is set

//--------------------- Reverse input for Left shift -------------------
reverse_32bit    reverse_in (.in(data_in), .out(reversed_in));

mux_2x1    mux_rev_in (
		.sel  (left_logic_mode),
		.i_0  (data_in        ),
		.i_1  (reversed_in    ),
		.o_mux(bin_in         )
);

//--------------------- Performing Right shift ---------------------
shift_R1_32bit  shift_1 (.in(bin_in), .shift_in_bit(shift_in_bit), .out(shift_R1));
shift_R2_32bit  shift_2 (.in(mux_R1), .shift_in_bit(shift_in_bit), .out(shift_R2));
shift_R4_32bit  shift_4 (.in(mux_R2), .shift_in_bit(shift_in_bit), .out(shift_R4));
shift_R8_32bit  shift_8 (.in(mux_R4), .shift_in_bit(shift_in_bit), .out(shift_R8));
shift_R16_32bit shift_16(.in(mux_R8), .shift_in_bit(shift_in_bit), .out(shift_R16));

mux_2x1   mux_1   (.sel(shift_amount[0] & ~reserved_mode), .i_0(bin_in), .i_1(shift_R1),  .o_mux(mux_R1));
mux_2x1   mux_2   (.sel(shift_amount[1] & ~reserved_mode), .i_0(mux_R1), .i_1(shift_R2),  .o_mux(mux_R2));
mux_2x1   mux_4   (.sel(shift_amount[2] & ~reserved_mode), .i_0(mux_R2), .i_1(shift_R4),  .o_mux(mux_R4));
mux_2x1   mux_8   (.sel(shift_amount[3] & ~reserved_mode), .i_0(mux_R4), .i_1(shift_R8),  .o_mux(mux_R8));
mux_2x1   mux_16  (.sel(shift_amount[4] & ~reserved_mode), .i_0(mux_R8), .i_1(shift_R16), .o_mux(mux_R16));


//--------------------- reverse output for Left shift -----------------------
wire logic [1:0] mux_out_sel;
assign mux_out_sel[0] = left_logic_mode;
assign mux_out_sel[1] = out_of_range;

reverse_32bit    reverse_out (.in(mux_R16), .out(reversed_out));

mux_4x1  mux_out (
		.sel  (mux_out_sel  ),
		.i_0  (mux_R16      ),
		.i_1  (reversed_out ),
		.i_2  (32'b0        ),
		.i_3  (32'b0        ),
		.o_mux(data_out     )
);

endmodule




// ==========================================================================
module shift_R16_32bit(
		input  logic [31:0] in,
		input  logic        shift_in_bit,
		output logic [31:0] out
);

assign out[31:16] = {16{shift_in_bit}}; 
assign out[15:0]  = in[31:16];
endmodule : shift_R16_32bit



// ==========================================================================
module shift_R8_32bit(
		input  logic [31:0] in,
		input  logic        shift_in_bit,
		output logic [31:0] out
);

assign out[31:24] = {8{shift_in_bit}}; 
assign out[23:0]  = in[31:8];
endmodule : shift_R8_32bit



// ==========================================================================
module shift_R4_32bit(
		input  logic [31:0] in,
		input  logic        shift_in_bit,
		output logic [31:0] out
);

assign out[31]   = shift_in_bit; 
assign out[30]   = shift_in_bit; 
assign out[29]   = shift_in_bit; 
assign out[28]   = shift_in_bit; 

assign out[27:0] = in[31:4];
endmodule : shift_R4_32bit



// ==========================================================================
module shift_R2_32bit(
		input  logic [31:0] in,
		input  logic        shift_in_bit,
		output logic [31:0] out
);

assign out[31]   = shift_in_bit; 
assign out[30]   = shift_in_bit; 
assign out[29:0] = in[31:2];
endmodule : shift_R2_32bit



// ==========================================================================
module shift_R1_32bit(
		input  logic [31:0] in,
		input  logic        shift_in_bit,
		output logic [31:0] out
);

assign out[31]   = shift_in_bit; 
assign out[30:0] = in[31:1];
endmodule : shift_R1_32bit



// ==========================================================================
module reverse_32bit(
		input  logic [31:0] in,
		output logic [31:0] out
);

assign out[31] = in[0];
assign out[30] = in[1];
assign out[29] = in[2];
assign out[28] = in[3];
assign out[27] = in[4];
assign out[26] = in[5];
assign out[25] = in[6];
assign out[24] = in[7];
assign out[23] = in[8];
assign out[22] = in[9];
assign out[21] = in[10];
assign out[20] = in[11];
assign out[19] = in[12];
assign out[18] = in[13];
assign out[17] = in[14];
assign out[16] = in[15];
assign out[15] = in[16];
assign out[14] = in[17];
assign out[13] = in[18];
assign out[12] = in[19];
assign out[11] = in[20];
assign out[10] = in[21];
assign out[9]  = in[22];
assign out[8]  = in[23];
assign out[7]  = in[24];
assign out[6]  = in[25];
assign out[5]  = in[26];
assign out[4]  = in[27];
assign out[3]  = in[28];
assign out[2]  = in[29];
assign out[1]  = in[30];
assign out[0]  = in[31];
endmodule : reverse_32bit










