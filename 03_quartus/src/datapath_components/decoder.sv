// This file contains 4 modules:
// 1. decoder_5to32
// 2. decoder_4to16
// 3. decoder_3to8
// 4. decoder_2to4

module decoder_5to32(
		input  logic [4:0] sel,
		input  logic en, 
		output logic [31:0] Y
); 
decoder_4to16		Bottom(.en(~sel[4] & en), .sel(sel[3:0]), .Y(Y[15:0]));
decoder_4to16		Top   (.en( sel[4] & en), .sel(sel[3:0]), .Y(Y[31:16]));
endmodule : decoder_5to32

// =============================================================================
module decoder_4to16(
		input  logic [3:0] sel,
		input  logic en, 
		output logic [15:0] Y
); 
decoder_3to8		Bottom(.en(~sel[3] & en), .sel(sel[2:0]), .Y(Y[7:0]));
decoder_3to8		Top   (.en( sel[3] & en), .sel(sel[2:0]), .Y(Y[15:8]));

endmodule : decoder_4to16
// =============================================================================

module decoder_3to8(
		input  logic [2:0] sel,
		input  logic en, 
		output logic [7:0] Y
); 
decoder_2to4		Bottom(.en(~sel[2] & en), .sel(sel[1:0]), .Y(Y[3:0]));
decoder_2to4		Top   (.en( sel[2] & en), .sel(sel[1:0]), .Y(Y[7:4]));
endmodule : decoder_3to8


// =============================================================================
module decoder_2to4(
		input  logic en,
		input  logic [1:0] sel,
		output logic [3:0] Y
);

assign Y[0] = en & ~sel[1] & ~sel[0];
assign Y[1] = en & ~sel[1] &  sel[0];
assign Y[2] = en &  sel[1] & ~sel[0];
assign Y[3] = en &  sel[1] &  sel[0];
endmodule : decoder_2to4
