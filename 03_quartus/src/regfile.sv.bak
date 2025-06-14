import pipeline_pkg::writeback_t;

module regfile (
    input  logic         i_clk,
    input  logic         i_rstn,
    input  writeback_t   i_wb_pkg,
    input  logic [4:0]   i_rs1_addr,
    input  logic [4:0]   i_rs2_addr,
    output logic [31:0]  o_rs1_data,  // Combinational reads
    output logic [31:0]  o_rs2_data   // Combinational reads
);

// 32 general-purpose 32-bit registers
logic [31:0][31:0] R;

// Aliases 
logic [31:0] rs1_data;
logic [31:0] rs2_data;
logic [31:0] rd_data;
logic [4:0]  rs1_addr;
logic [4:0]  rs2_addr;
logic [4:0]  rd_addr;
logic        wren;

assign rs1_addr = i_rs1_addr;
assign rs2_addr = i_rs2_addr;

assign rd_addr  = i_wb_pkg.rd_addr;
assign rd_data  = i_wb_pkg.rd_data;
assign wren     = i_wb_pkg.wren;

// Synchronous write
always_ff @(posedge i_clk or negedge i_rstn) begin
        if (!i_rstn)                          R          <= 'b0;
        else if (wren && (rd_addr != 5'd0))   R[rd_addr] <= rd_data;
        else                                  R[rd_addr] <= R[rd_addr];
end

// Combinational reads
assign rs1_data = R[rs1_addr];
assign rs2_data = R[rs2_addr];


// Output
assign o_rs1_data = rs1_data;
assign o_rs2_data = rs2_data;










// DEBUG
logic [31:0] R0, R8,  R16, R24;
logic [31:0] R1, R9,  R17, R25;
logic [31:0] R2, R10, R18, R26;
logic [31:0] R3, R11, R19, R27;
logic [31:0] R4, R12, R20, R28;
logic [31:0] R5, R13, R21, R29;
logic [31:0] R6, R14, R22, R30;
logic [31:0] R7, R15, R23, R31;

assign R0  = R[0] ;
assign R1  = R[1] ;
assign R2  = R[2] ;
assign R3  = R[3] ;
assign R4  = R[4] ;
assign R5  = R[5] ;
assign R6  = R[6] ;
assign R7  = R[7] ;
assign R8  = R[8] ;
assign R9  = R[9] ;
assign R10 = R[10];
assign R11 = R[11];
assign R12 = R[12];
assign R13 = R[13];
assign R14 = R[14];
assign R15 = R[15];
assign R16 = R[16];
assign R17 = R[17];
assign R18 = R[18];
assign R19 = R[19];
assign R20 = R[20];
assign R21 = R[21];
assign R22 = R[22];
assign R23 = R[23];
assign R24 = R[24];
assign R25 = R[25];
assign R26 = R[26];
assign R27 = R[27];
assign R28 = R[28];
assign R29 = R[29];
assign R30 = R[30];
assign R31 = R[31];



endmodule
