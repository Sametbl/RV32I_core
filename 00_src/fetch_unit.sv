import pipeline_pkg::branch_t;
import pipeline_pkg::fetch_t;

module fetch_unit(
        input  logic        i_clk           ,
        input  logic        i_rstn          ,
        input  logic        i_fetch_buff_en ,   // Enable signal for the Fetch Stage buffer 
        input  branch_t     i_alu_prd_pkg   ,   // Input Data package from ALU of the executing branch instruction
        output fetch_t      o_fetch_pkg     ,   // Output data packed of Fetch stage
        output              o_branch_miss,      // ACTIVE HIGH - Branch Misprediction in General  

        output [31:0]       db_next_PC_d, 
        output [31:0]       db_next_PC_q, 
        output [1:0]        db_pc_sel 
);

// ----------------------------- Initialization -------------------------
wire [1:0] pc_init; // Prevent buffering PC +4 after Reset (We want PC = 0 first)

d_flipflop  initialization_bit1( 
        .clk  (i_clk     ),
        .rst_n(i_rstn    ),
        .en   (1'b1      ),  
        .D    (1'b1      ), 
        .Q    (pc_init[0])    // High to enable Cache to fetch Instr at PC = 0
);
d_flipflop  initialization_bit2 (
        .clk  (i_clk     ),
        .rst_n(i_rstn    ),
        .en   (1'b1      ),  
        .D    (pc_init[0]), 
        .Q    (pc_init[1])   // High to enable PC + 4 Adder
);



// -----------------------------------------------------------------
wire [31:0] next_pc_d;         // Next PC before PC register 
wire [31:0] next_pc_q;         // Next PC after  PC register

wire [31:0] prd_br_target;     // Predicted Target from BTB
wire        prd_br_taken;

wire [31:0] alu_update_pc;       // PC     of the updating Branch instr from ALU
wire [31:0] alu_pc_plus_4;       // PC + 4 of the updating Branch instr from ALU
wire [31:0] alu_update_target;   // Target of the updatung Branch instr from ALU
wire        alu_update_en;       // Indicate data from ALU related to Branch instrs   
wire        alu_update_valid;    // Indicate Branch instr data from ALU is Valid 
wire        alu_update_taken;    // Indicate result of Branch instr from ALU is Taken
wire        alu_br_already_prd;  // 

logic        br_miss_t;      // Indicate a "Taken"     Branch misprediction (specific) 
logic        br_miss_nt;     // Indicate a "Not Taken" Branch misprediction (specific)
logic        branch_miss;    // Branch misprediction signal (general)
logic        prd_br_taken_d;
logic        prd_br_taken_q;

logic [31:0] pc_plus_4;      // PC + 4 of current PC 
logic [1:0]  pc_sel;         // Select signal to select the next PC from MUX

assign br_miss_t    = alu_update_en & alu_update_valid & ~alu_update_taken &  alu_br_already_prd;
assign br_miss_nt   = alu_update_en & alu_update_valid &  alu_update_taken & ~alu_br_already_prd;
assign branch_miss  = (br_miss_t | br_miss_nt);

assign alu_update_pc      = i_alu_prd_pkg.br_update_pc        ;
assign alu_pc_plus_4      = i_alu_prd_pkg.br_pc_plus4         ;
assign alu_update_en      = i_alu_prd_pkg.br_update_en        ;
assign alu_update_valid   = i_alu_prd_pkg.br_valid            ;
assign alu_update_taken   = i_alu_prd_pkg.br_taken            ; 
assign alu_update_target  = i_alu_prd_pkg.br_target           ;
assign alu_br_already_prd = i_alu_prd_pkg.br_already_predicted;


// ---------------------------- BRANCH PREDICTION -----------------------------
br_prediction_unit  PRD  (
          .i_clk                  (i_clk             ),
          .i_rstn                 (i_rstn            ),
          .i_current_pc           (next_pc_q         ),   // Next PC for the BTB to check and predict
          .i_br_update_en         (alu_update_en     ),   // Enable updating BTB
          .i_br_update_valid      (alu_update_valid  ),   // Indicate the updating Branch instr is Valid
          .i_br_update_taken      (alu_update_taken  ),   // High to indicate updating Branch instr is Taken
          .i_br_update_pc         (alu_update_pc     ),   // The PC of the updating Branch instr
          .i_br_update_target     (alu_update_target ),   // The Target of the updating Branch instr
          .i_br_update_already_prd(alu_br_already_prd),   // 
          .o_prd_target           (prd_br_target     ),   // Output Target from BTB when Hit
          .o_prd_taken            (prd_br_taken      )    // Output bit to indicate a "Taken" Prediction
);


// -------------------------------- PC + 4 computation --------------------------
adder_32bit  PC_plus4_Adder (
          .a    (next_pc_q                   ),  // current PC
          .b    (({29'b0, pc_init[1] & i_fetch_buff_en, 2'b0}) ),  
          .sub  (1'b0                        ),
          .sum  (pc_plus_4                   ),  // PC + 4
          .cout (                            )
);

// -------------------------------- PC selection  -------------------------------
assign pc_sel[0] = (prd_br_taken & ~br_miss_t ) | (br_miss_nt);
assign pc_sel[1] = (prd_br_taken & ~br_miss_nt) | (br_miss_t );


mux_4x1   PC_mux (
        .sel  (pc_sel           ),
        .i_0  (pc_plus_4        ),  // PC + 4 (default)
        .i_1  (alu_update_target),  // Direct Target result from ALU (When "Not taken" mis-prediction)
        .i_2  (alu_pc_plus_4    ),  // PC + 4 of executing Branch instr from ALU (When "Taken" misprediction)
        .i_3  (prd_br_target    ),  // Target address provided by PRD (When BTB hit and taken)
        .o_mux(next_pc_d        )
);

register  PC_register (                         // Wait for Instruction to Fetch
        .clk  (i_clk           ),
        .rst_n(i_rstn          ),
        .en   (i_fetch_buff_en ),  // Fetch stage enable (for Halt & Stall)
        .D    (next_pc_d       ), 
        .Q    (next_pc_q       )
);

// ----------------------- Fetching Instruction from Memory Cache --------------------
wire [31:0] cache_instr_data;
wire        cache_instr_valid;
logic       instr_valid;

instruction_cache	instr_cache (
	.clock   (i_clk           ),
	.address ({2'b0, next_pc_d[31:2]}  ), // FIXME: Division by 4 due to ROM in Quartus is not byte-addressible
	.rden    (1'b1            ),
	.q       (cache_instr_data)
);

// Validation: PC is divisible by 4 - PC[1:0] = 2'b00 
assign instr_valid = (cache_instr_data != 0) & ~(next_pc_q[1] | next_pc_q[0]) ; 



// --------------------------------- Fetch Stage Buffer ------------------------------
fetch_t   fetch_pkg_d;

assign prd_br_taken_d = prd_br_taken;
d_flipflop  instr_prd_takn_indicator (
        .clk  (i_clk          ),
        .rst_n(i_rstn         ),
        .en   (i_fetch_buff_en),  
        .D    (prd_br_taken_d ), 
        .Q    (prd_br_taken_q )   // High to enable PC + 4 Adder
);

assign fetch_pkg_d.instr       = cache_instr_data;
assign fetch_pkg_d.pc          = branch_miss ? 32'b0 : next_pc_q;   // FIXME: Set PC to 0 for debug purpose only
assign fetch_pkg_d.prd_taken   = prd_br_taken_q;
assign fetch_pkg_d.valid       = instr_valid & ~branch_miss;  

// Output: IF Buffer
register #(.WIDTH($bits(fetch_pkg_d)))  fetch_buffer (
        .clk  (i_clk          ),
        .rst_n(i_rstn         ),
        .en   (i_fetch_buff_en),  // Fetch stage enable (for Halt & Stall)
        .D    (fetch_pkg_d    ), 
        .Q    (o_fetch_pkg    )
);



assign o_branch_miss  = branch_miss;


// DEBUG
assign db_next_PC_d = next_pc_d;
assign db_next_PC_q = next_pc_q;
assign db_pc_sel   = pc_sel;

endmodule : fetch_unit








