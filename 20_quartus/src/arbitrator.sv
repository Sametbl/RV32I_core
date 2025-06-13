module arbitrator(
    input  decode_t        i_dcd_EX_pkg ,   // Decode data package in EX stage 
    input  logic    [63:0] i_rs_data    ,   // RS1 and RS2 data from Regfile 
    input  fwd_t           i_mem_fwd_pkg,
    input  fwd_t           i_wb_fwd_pkg ,
    output alu_t           o_abt_alu_pkg,   
    output lsu_t           o_abt_lsu_pkg    // Output data Package to LSU (Address is provided by ALU) 
);


wire [31:0] rs1_data;
wire [31:0] rs2_data;
wire [31:0] mem_fwd_data;
wire [31:0] wb_fwd_data;
wire [31:0] pc;
wire [31:0] imm;

wire [4:0]  rs1_addr;
wire [4:0]  rs2_addr;
wire [4:0]  rd_addr;


wire        use_rs1;
wire        use_rs2;
wire        op_a_use_pc;
wire        op_b_use_imm;


assign rs1_data     = i_rs_data[31:0];
assign rs2_data     = i_rs_data[63:32];
assign rs1_addr     = i_dcd_EX_pkg.rs1_addr; 
assign rs2_addr     = i_dcd_EX_pkg.rs2_addr; 
assign rd_addr      = i_dcd_EX_pkg.rd_addr; 
assign pc           = i_dcd_EX_pkg.pc;
assign imm          = i_dcd_EX_pkg.imm;
assign op_a_use_pc  = i_dcd_EX_pkg.op_a_use_pc;
assign op_b_use_imm = i_dcd_EX_pkg.op_b_use_imm;
assign use_rs1      = i_dcd_EX_pkg.use_rs1;
assign use_rs2      = i_dcd_EX_pkg.use_rs2;

assign mem_fwd_data = i_mem_fwd_pkg.fwd_rd_data;
assign wb_fwd_data  = i_wb_fwd_pkg.fwd_rd_data;


// -------------------------------------- FORWARDING --------------------------------
wire [4:0]  mem_rd_addr;
wire [4:0]  wb_rd_addr;
wire        mem_fwd_allow;
wire        wb_fwd_allow;

logic [1:0] rs1_fwd_flags; // RS1 fowarding flags, each bit correspond to a fowarding Location
logic [1:0] rs2_fwd_flags; // RS2 fowarding flags, each bit correspond to a fowarding Location

assign mem_rd_addr   = i_mem_fwd_pkg.fwd_rd_addr;
assign mem_fwd_allow = i_mem_fwd_pkg.fwd_allow;

assign wb_rd_addr    = i_wb_fwd_pkg.fwd_rd_addr;
assign wb_fwd_allow  = i_wb_fwd_pkg.fwd_allow;


forwarding_unit   forwarding(
    .i_rs1_addr      (rs1_addr      ),          
    .i_rs2_addr      (rs2_addr      ),          
    .i_rs1_valid     (use_rs1       ), // Indicate rs1_addr field is used for addressing Regfile          
    .i_rs2_valid     (use_rs2       ), // Indicate rs2_addr field is used for addressing Regfile          
    .i_mem_rd_addr   (mem_rd_addr   ),      
    .i_mem_fwd_allow (mem_fwd_allow ),  
    .i_wb_rd_addr    (wb_rd_addr    ),      
    .i_wb_fwd_allow  (wb_fwd_allow  ),      
    .o_rs1_fwd_flags (rs1_fwd_flags ),   
    .o_rs2_fwd_flags (rs2_fwd_flags )   
);



// -------------------------------------- OPERANDS SELECTION -----------------------------
logic [31:0] operand_a_selected;
logic [31:0] operand_b_selected;
logic [31:0] rs1_forwarded;
logic [31:0] rs2_forwarded;
logic [1:0]  operand_a_sel;
logic [1:0]  operand_b_sel;

assign operand_a_sel[0] =  (op_a_use_pc);
assign operand_a_sel[1] = ~(use_rs1 | op_a_use_pc);            // LUI

assign operand_b_sel[0] =  (op_b_use_imm);
assign operand_b_sel[1] = ~(use_rs2 | op_b_use_imm);

mux_4x1   RS1_Select  (
        .sel  (rs1_fwd_flags     ),
        .i_0  (rs1_data          ),    // 2'b00: Regfile (default)
        .i_1  (mem_fwd_data      ),               
        .i_2  (wb_fwd_data       ),                           
        .i_3  (32'b0             ),                                              
        .o_mux(rs1_forwarded     )
);

mux_4x1   RS2_Select  (
        .sel  (rs2_fwd_flags     ),
        .i_0  (rs2_data          ),    // 2'b00: Regfile (default)
        .i_1  (mem_fwd_data      ),               
        .i_2  (wb_fwd_data       ),                           
        .i_3  (32'b0             ),                                              
        .o_mux(rs2_forwarded     )
);



mux_4x1   Operand_A_Select  (
        .sel  (operand_a_sel     ),
        .i_0  (rs1_forwarded     ),  // 2'b00: Regfile or forwarded RS1 (default)
        .i_1  (pc                ),  // 2'b01: PC (for Branch instruction)     
        .i_2  (32'b0             ),  // 2'b10: Reserved or Operand A = 0             
        .i_3  (32'b0             ),  // 2'b11: Reserved or Operand A = 0                                         
        .o_mux(operand_a_selected)
);


mux_4x1   Operand_B_Select  (
        .sel  (operand_b_sel    ),
        .i_0  (rs2_forwarded    ),  // 2'b00: Regfile or forwarded RS2 (default)
        .i_1  (imm              ),  // 2'b01: immediate      
        .i_2  (32'b0            ),  // 2'b10: Reserved or Operand B = 0             
        .i_3  (32'b0            ),  // 2'b11: Reserved or Operand B = 0                                              
        .o_mux(operand_b_selected)
);




// OUTPUT
assign o_abt_alu_pkg.instr_op        = i_dcd_EX_pkg.instr_op;
assign o_abt_alu_pkg.operand_a       = operand_a_selected;
assign o_abt_alu_pkg.operand_b       = operand_b_selected;
assign o_abt_alu_pkg.rs1_data        = rs1_forwarded;
assign o_abt_alu_pkg.rs2_data        = rs2_forwarded;
assign o_abt_alu_pkg.rd_addr         = rd_addr; 
assign o_abt_alu_pkg.pc              = pc;
assign o_abt_alu_pkg.wren            = i_dcd_EX_pkg.wren;
assign o_abt_alu_pkg.prd_en          = i_dcd_EX_pkg.prd_en;
assign o_abt_alu_pkg.valid           = i_dcd_EX_pkg.valid;
assign o_abt_alu_pkg.predicted_instr = i_dcd_EX_pkg.predicted_instr;
assign o_abt_alu_pkg.rd_data_sel     = i_dcd_EX_pkg.rd_data_sel;



assign o_abt_lsu_pkg.store_data      = rs2_forwarded;
assign o_abt_lsu_pkg.load_en         = i_dcd_EX_pkg.load_en;  
assign o_abt_lsu_pkg.store_en        = i_dcd_EX_pkg.store_en;  
assign o_abt_lsu_pkg.lsu_byte        = i_dcd_EX_pkg.lsu_byte;  
assign o_abt_lsu_pkg.lsu_halfword    = i_dcd_EX_pkg.lsu_halfword;  
assign o_abt_lsu_pkg.lsu_signed      = i_dcd_EX_pkg.lsu_signed;  
assign o_abt_lsu_pkg.valid           = i_dcd_EX_pkg.valid;  




endmodule 

