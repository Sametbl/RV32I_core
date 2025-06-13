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
logic [31:0] R0;
logic [31:0] R1;
logic [31:0] R2;
logic [31:0] R3;
logic [31:0] R4;
logic [31:0] R5;
logic [31:0] R6;
logic [31:0] R7;
logic [31:0] R8;
logic [31:0] R9;
logic [31:0] R10;
logic [31:0] R11;
logic [31:0] R12;
logic [31:0] R13;
logic [31:0] R14;
logic [31:0] R15;
logic [31:0] R16;
logic [31:0] R17;
logic [31:0] R18;
logic [31:0] R19;
logic [31:0] R20;
logic [31:0] R21;
logic [31:0] R22;
logic [31:0] R23;
logic [31:0] R24;
logic [31:0] R25;
logic [31:0] R26;
logic [31:0] R27;
logic [31:0] R28;
logic [31:0] R29;
logic [31:0] R30;
logic [31:0] R31;


assign R0  = R[0];    
assign R1  = R[1];    
assign R2  = R[2];    
assign R3  = R[3];    
assign R4  = R[4];    
assign R5  = R[5];    
assign R6  = R[6];    
assign R7  = R[7];    
assign R8  = R[8];    
assign R9  = R[9];    
assign R10 = R1[0];     
assign R11 = R1[1];     
assign R12 = R1[2];     
assign R13 = R1[3];     
assign R14 = R1[4];     
assign R15 = R1[5];     
assign R16 = R1[6];     
assign R17 = R1[7];     
assign R18 = R1[8];     
assign R19 = R1[9];     
assign R20 = R2[0];     
assign R21 = R2[1];     
assign R22 = R2[2];     
assign R23 = R2[3];     
assign R24 = R2[4];     
assign R25 = R2[5];     
assign R26 = R2[6];     
assign R27 = R2[7];     
assign R28 = R2[8];     
assign R29 = R2[9];     
assign R30 = R3[0];     
assign R31 = R3[1];     


endmodule
