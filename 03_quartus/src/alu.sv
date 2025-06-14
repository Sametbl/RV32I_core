import pipeline_pkg::*;

module alu(
    input  alu_t          i_abt_alu_pkg,          // Input data
    input  logic          i_invalidate,           // Invalidate operation when neccesary
    output branch_t       o_alu_prd_pkg,          // Output data package to updating Branch Prediction 
    output pipe_buff_t    o_alu_mem_pkg           // Output data package to MEM stage
);


// Alias
instr_e      instr_op;
wire [31:0]  operand_a;
wire [31:0]  operand_b;
wire [31:0]  rs1_data;
wire [31:0]  rs2_data;
wire [31:0]  pc;
wire [31:0]  pc_plus4;

wire [4:0]   rd_addr;
wire [1:0]   rd_data_sel;
wire         wren;
wire         valid;
wire         prd_en;
wire         predicted_instr;


assign instr_op        = i_abt_alu_pkg.instr_op; 
assign operand_a       = i_abt_alu_pkg.operand_a; 
assign operand_b       = i_abt_alu_pkg.operand_b; 
assign rs1_data        = i_abt_alu_pkg.rs1_data; 
assign rs2_data        = i_abt_alu_pkg.rs2_data; 
assign pc              = i_abt_alu_pkg.pc; 
assign rd_addr         = i_abt_alu_pkg.rd_addr;
assign rd_data_sel     = i_abt_alu_pkg.rd_data_sel;
assign wren            = i_abt_alu_pkg.wren;
assign valid           = i_abt_alu_pkg.valid & ~i_invalidate;
assign prd_en          = i_abt_alu_pkg.prd_en;
assign predicted_instr = i_abt_alu_pkg.predicted_instr;

adder_32bit  PC_plus4_Adder (
          .a    (pc       ), // current PC
          .b    (32'd4    ),  
          .sub  (1'b0     ),
          .sum  (pc_plus4 ),  // PC + 4
          .cout (         )
);


logic  br_jump; // Indicate JUMP instruction
assign br_jump = (instr_op == JAL ) | (instr_op == JALR);



// ------------------------------- ALU computation --------------------------
// Temporary Data signal
logic [31:0]  OR_dat;           // Result of OR  operation (OR)
logic [31:0]  AND_dat;          // Result of AND operation (AND)
logic [31:0]  XOR_dat;          // Result of XOR operation (XOR)
logic [31:0]  cmp_dat;          // Result of Comparison, 32-bit exteneded (SLT, SLTU)
logic [31:0]  adder_dat;        // Result of addition/subtraction (ADD, SUB)
logic [31:0]  shifter_dat;      // Result of Shifter module (SRA, SLL, SRL)
logic [31:0]  output_dat;       // Final result (selected output)
logic [31:0]  reserved;         // Reserved, default value = 32'b0

// Control signal
logic         cmp_crtl;         // Select signed or unsigned comparison
logic         adder_ctrl;       // Select addition or subtration
logic [1:0]   shifter_ctrl;     // shifter_crtl = 2'b00 : shift Right logical (default) , when alu_op == 4'b1000
                                // shifter_crtl = 2;b01 : shift Left  logical           , when alu_op == 4'b0111
                                // shifter_crtl = 2'b10 : shift Right Arithmetic        , when alu_op == 4'b1001
                                // shifter_crtl = 2'b11 : Reserved

logic [2:0]   output_sel;       // Selecting signal for Mux to select the output
logic         reserved_sel;

assign shifter_ctrl[0] = (instr_op == SLL)  | (instr_op == SLLI);       // Shift Left Logical
assign shifter_ctrl[1] = (instr_op == SRA)  | (instr_op == SRAI);       // Shift Right Arithmetic
assign cmp_crtl        = (instr_op == SLTU) | (instr_op == SLTIU);  // High to enable Unsigned comparison
assign adder_ctrl      = (instr_op == SUB);                         // High to enable Subatraction mode

assign reserved        =  32'b0;
assign reserved_sel    =  ~valid;

// ADD - SUB instructions
adder_32bit  ALU_Adder (
            .a    (operand_a ),
            .b    (operand_b ),  
            .sub  (adder_ctrl),
            .sum  (adder_dat ), 
            .cout ()
);


// SLT/SLTU instructions - Set if Less Than
assign cmp_dat[31:1] = 31'b0;
comparator_32bit  ALU_comparator   (
            .A          (operand_a  ),
            .B          (operand_b  ),
            .is_unsigned(cmp_crtl   ),
            .smaller    (cmp_dat[0] ),
            .equal      (           ),
            .larger     (           )
);

// SHIFTER instructions - LOGICAL - ARITHMETIC
shifter_32bit     ALU_shifter (
            .data_in     (operand_a     ),
            .shift_amount(operand_b     ),
            .mode        (shifter_ctrl  ),
            .data_out    (shifter_dat   )
);


// Logical instructions - AND, OR, XOR
assign OR_dat  = operand_a | operand_b;
assign AND_dat = operand_a & operand_b;
assign XOR_dat = operand_a ^ operand_b;


// -------------------------------- RESULT SELECTION -------------------------------
// D0 - output_sel = 3'b000:      output data = Adder   (default)
// D1 - output_sel = 3'b001:      output data = Comparator
// D2 - output_sel = 3'b010:      output data = Shifter
// D3 - output_sel = 3'b011:      output data = 32-bit XOR gate
// D4 - output_sel = 3'b100:      output data = 32-bit AND gate
// D5 - output_sel = 3'b101:      output data = 32-bit OR  gate
// D6 - output_sel = 3'b110:      output data = PC + 4             (JAL and JALR)
// D7 - output_sel = 3'b111:      RESERVED  or  output data = 0

assign output_sel[0] = (instr_op == SLT) | (instr_op == SLTI) | (instr_op == SLTU) | (instr_op == SLTIU) | // Comparator
                       (instr_op == XOR) | (instr_op == XORI) | (instr_op == OR  ) | (instr_op == ORI  ) | // XOR and OR gates
                        reserved_sel;

assign output_sel[1] = (instr_op == SRLI) | (instr_op == SRAI) | (instr_op == SLLI) |  // Shifter
                       (instr_op == SRL ) | (instr_op == SRA ) | (instr_op == SLL ) |  // Shifter
                       (instr_op == XOR ) | (instr_op == XORI) |                       // XOR gates
                       (br_jump) | reserved_sel;

assign output_sel[2] = (instr_op == AND) | (instr_op == ANDI) |
                       (instr_op == OR)  | (instr_op == ORI ) |
                       (br_jump) | reserved_sel;

mux_8x1  ALU_out(
        .sel  (output_sel  ),
        .i_0  (adder_dat   ),  
        .i_1  (cmp_dat     ),  
        .i_2  (shifter_dat ),  
        .i_3  (XOR_dat     ),  
        .i_4  (AND_dat     ),  
        .i_5  (OR_dat      ),  
        .i_6  (pc_plus4    ),  
        .i_7  (reserved    ),  
        .o_mux(output_dat  )
);


// -------------------------- BRANCH INSTRUCTION HANDLING ------------------
logic br_unsigned_cmp;  // Indicate RS1 and RS2 comparison is unsigned
logic rs1_eq_rs2;       // Indicate RS1 equal        RS2 
logic rs1_lt_rs2;       // Indicate RS1 less than    RS2 
logic rs1_gt_rs2;       // Indicate RS1 greater than RS2 
logic br_taken;         // Indicate the Branch instruction is result in Taken

assign br_unsigned_cmp = (instr_op == BLTU) | (instr_op == BGEU);

comparator_32bit  Branch_Condition_Check (
                    .A          (rs1_data       ),
                    .B          (rs2_data       ),
                    .is_unsigned(br_unsigned_cmp),
                    .equal      (rs1_eq_rs2     ),  // Equal
                    .smaller    (rs1_lt_rs2     ),  // Less Than
                    .larger     (rs1_gt_rs2     )   // Greater Than
);

// Branch Prediction Unit feedback
assign br_taken =  ((instr_op == BEQ)  &  rs1_eq_rs2) |   // 1. Brnach if Equal
                   ((instr_op == BNE)  & ~rs1_eq_rs2) |   // 2.Branch if Not Equal
                   ((instr_op == BLT)  &  rs1_lt_rs2) |   // 3. Branch if Less Than
                   ((instr_op == BGE)  &  rs1_gt_rs2) |   // 4. Branch if Greater or Equal
                   ((instr_op == BGE)  &  rs1_eq_rs2) |   // 4. Branch if Greater or Equal
                   ((instr_op == BLTU) &  rs1_lt_rs2) |   // 5. Branch if Less Than - Unsigned
                   ((instr_op == BGEU) &  rs1_gt_rs2) |   // 6. Branch if Greater or Equal - Unsigned
                   ((instr_op == BGEU) &  rs1_eq_rs2) |   // 6. Branch if Greater or Equal - Unsigned
                   (br_jump);


// Output 
// To PRD
assign o_alu_prd_pkg.br_update_pc         = pc;
assign o_alu_prd_pkg.br_update_en         = prd_en;
assign o_alu_prd_pkg.br_pc_plus4          = pc_plus4;
assign o_alu_prd_pkg.br_valid             = valid;
assign o_alu_prd_pkg.br_target            = adder_dat;
assign o_alu_prd_pkg.br_taken             = br_taken;
assign o_alu_prd_pkg.br_already_predicted = predicted_instr;

// To Next Stage
assign o_alu_mem_pkg.rd_data              = output_dat;
assign o_alu_mem_pkg.rd_addr              = rd_addr;
assign o_alu_mem_pkg.wren                 = wren;
assign o_alu_mem_pkg.valid                = valid;
assign o_alu_mem_pkg.rd_data_sel          = rd_data_sel;


endmodule: alu





