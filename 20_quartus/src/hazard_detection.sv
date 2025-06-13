module hazard_detection(
    input  logic [4:0] i_rs1_addr,      // Address of RS1 in ID stage (from Deocder)   
    input  logic [4:0] i_rs2_addr,      // Address of RS2 in ID stage (from Deocder)   
    input  logic [4:0] i_rd_addr_WB,    // Address of RD  in WB stage 
    input  logic [4:0] i_rd_addr_EX,    // Address of RD  in EX stage 
    input  logic       i_wb_wren,       // Write enable from WB stage
    input  logic       i_ex_load_instr, // Indicate a Load instruction is currently in EX stage
    output logic       o_stall_from_ID          // "stall" signals
);

logic rs1_eq_rd_EX;
logic rs2_eq_rd_EX;

logic rs1_eq_rd_WB;
logic rs2_eq_rd_WB;

assign rs1_eq_rd_EX = (i_rs1_addr == i_rd_addr_EX);
assign rs2_eq_rd_EX = (i_rs2_addr == i_rd_addr_EX);

assign rs1_eq_rd_WB = (i_rs1_addr == i_rd_addr_WB);
assign rs2_eq_rd_WB = (i_rs2_addr == i_rd_addr_WB);

// Stall case 1: Dependency on a Load instruction currently in EX stage 
logic wait_for_load_data;
assign wait_for_load_data = i_ex_load_instr & (rs1_eq_rd_EX | rs2_eq_rd_EX);

// Stall case 2: Dependency on an instruction currently in WB stage (Not yet available in Regfile)
logic wait_for_wb;
assign wait_for_wb = i_wb_wren & (rs1_eq_rd_WB | rs2_eq_rd_WB);

// Output
assign o_stall_from_ID  = (wait_for_load_data) | (wait_for_wb);

endmodule
