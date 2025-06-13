// Forwarding_cell module is defined at the end of file

module forwarding_unit(
    input   logic [4:0] i_rs1_addr,       // Address of Source Register 1
    input   logic [4:0] i_rs2_addr,       // Address of Source Register 2
    input   logic       i_rs1_valid,      // Indicate the Instr uses RS1
    input   logic       i_rs2_valid,      // Indicate the Instr uses RS2

    input   logic [4:0] i_mem_rd_addr,    // Location 1: Data from MEM stage
    input   logic       i_mem_fwd_allow,  // Indicate the Location 1 has data needed to be forwarded

    input   logic [4:0] i_wb_rd_addr,     // Location 2: Data in WB stage
    input   logic       i_wb_fwd_allow,   // Indicate the Location 2 has data needed to be forwarded

    output  logic [1:0] o_rs1_fwd_flags,  // Forwarding Select signal for Arbitration MUX
    output  logic [1:0] o_rs2_fwd_flags   // Forwarding Select signal for Arbitration MUX
);

logic rs1_mem_matched;
logic rs2_mem_matched;

logic rs1_wb_matched;
logic rs2_wb_matched;



//---------------------------- Forwarding Check ---------------------------------
forwarding_cell    FWD_check_MEM_stage  (
        .i_rs1_addr       (i_rs1_addr     ),   
        .i_rs2_addr       (i_rs2_addr     ),   
        .i_rd_addr_buff   (i_mem_rd_addr  ),   
        .i_fwd_allow      (i_mem_fwd_allow),
        .o_fwd_rs1_matched(rs1_mem_matched),
        .o_fwd_rs2_matched(rs2_mem_matched)
);

forwarding_cell    FWD_check_WB_stage  (
        .i_rs1_addr       (i_rs1_addr     ),   
        .i_rs2_addr       (i_rs2_addr     ),   
        .i_rd_addr_buff   (i_wb_rd_addr   ),   
        .i_fwd_allow      (i_wb_fwd_allow ),
        .o_fwd_rs1_matched(rs1_wb_matched ),
        .o_fwd_rs2_matched(rs2_wb_matched )
);

// Output (One-hot encoded)
// Prioritize the close Forwarding location to the EX stage
assign o_rs1_fwd_flags[0] = i_rs1_valid & rs1_mem_matched;
assign o_rs1_fwd_flags[1] = i_rs1_valid & rs1_wb_matched & ~rs1_mem_matched;

assign o_rs2_fwd_flags[0] = i_rs2_valid & rs2_mem_matched;
assign o_rs2_fwd_flags[1] = i_rs2_valid & rs2_wb_matched & ~rs2_mem_matched;







endmodule








//----------------------------------------------------------------------------------
module forwarding_cell(
    input  logic [4:0] i_rs1_addr     ,   // Current RS1 address to be compared
    input  logic [4:0] i_rs2_addr     ,   // Current RS2 address to be compared
    input  logic [4:0] i_rd_addr_buff ,   // RD address from buffer to be compared to
    input  logic       i_fwd_allow    ,
    output logic       o_fwd_rs1_matched,
    output logic       o_fwd_rs2_matched
);


logic rs1_matched;
logic rs2_matched;

assign rs1_matched = (i_rs1_addr == i_rd_addr_buff);
assign rs2_matched = (i_rs2_addr == i_rd_addr_buff);

assign o_fwd_rs1_matched = (rs1_matched) & (i_fwd_allow);
assign o_fwd_rs2_matched = (rs2_matched) & (i_fwd_allow);

endmodule

