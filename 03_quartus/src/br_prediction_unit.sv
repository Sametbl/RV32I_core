
// This module in integrated in "next_pc_unit"

module br_prediction_unit (
    input  logic        i_clk,
    input  logic        i_rstn,
    input  logic        i_br_update_en,       // HIGH when actual Branch result from BRU is known
    input  logic        i_br_update_valid,
    input  logic        i_br_update_taken,    // HIGH when actual Branch result from BRU is TAKEN
    input  logic        i_br_update_already_prd,  
    input  logic [31:0] i_br_update_pc,
    input  logic [31:0] i_br_update_target,   // Actual branch target provided by BRU when updating
    input  logic [31:0] i_current_pc,         // Current program counter for prediction
    output logic [31:0] o_prd_target,         // Predicted branch target address
    output logic        o_prd_taken           // Indicates a prediction is made
);

logic [31:0] prd_target;
logic        hit;
logic        prediction_bit;


BTB   Target_Table (.i_clk             (i_clk                             ),
                    .i_rstn            (i_rstn                            ),
                    .i_current_pc      (i_current_pc                      ),
                    .i_br_update_en    (i_br_update_en & i_br_update_valid),
                    .i_br_update_pc    (i_br_update_pc                    ),
                    .i_br_update_valid (1'b1                              ),
                    .i_br_update_target(i_br_update_target                ),
                    .o_BTB_target      (prd_target                        ),
                    .o_hit             (hit                               )
);

// Dynamic Predictor Instance
dynamic_predictor    predictor (
                    .i_clk            (i_clk                             ),
                    .i_rstn           (i_rstn                            ),
                    .i_br_update_en   (i_br_update_en & i_br_update_valid),
                    .i_br_update_taken(i_br_update_taken                 ),
                    .o_prediction_bit (prediction_bit                    )
);


assign o_prd_taken = 1'b0; // Currently not using Branch prediction
// assign o_prd_taken   =  (hit_1 | hit_2) & prediction_bit;    // Not taken when updating BTB

endmodule : br_prediction_unit







module BTB #(parameter int ENTRIES = 64)(
    input  logic        i_clk,
    input  logic        i_rstn,
    input  logic        i_br_update_en,       // HIGH when actual Branch result from BRU is known (A new branch instruction executed)
    input  logic        i_br_update_valid,    // High when the newly executed Branch instruction is valid instruction
    input  logic [31:0] i_br_update_pc,       // PC of the branch instruction that just being executed
    input  logic [31:0] i_br_update_target,   // New branch target provided by BRU after executing a branch instruction 
    input  logic [31:0] i_current_pc,         // Current program counter for prediction
    output logic [31:0] o_BTB_target,         // Branch target address stored in BTB
    output logic        o_hit                 // Indicates a BTB hit
);
// BTB with 64 entries
reg   [ENTRIES -1:0][23:0] BTB_tag   ;            // Tags
reg   [ENTRIES -1:0][31:0] BTA       ;            // Branch Target Address
reg   [ENTRIES -1:0]       BTB_valid ;            // Valid bits
reg   [ENTRIES -1:0][1:0]  BTB_counter;           // Store 2-bit predictor 

logic [23:0]       w_tag;
logic [5:0]        w_index;
assign w_tag    = i_br_update_pc[31:8];                // Extract tag   from PC
assign w_index  = i_br_update_pc[7:2];                 // Extract index from PC


always @(posedge i_clk or negedge i_rstn) begin
    if (!i_rstn) begin
        for (int i = 0; i < 63; i++) begin
            BTB_tag[i]    <= 24'b0;
            BTB_valid[i]  <= 1'b0;
            BTA[i]        <= 32'b0;
        end
    end
    else if (i_br_update_en) begin           // Append or Update BTB
        BTB_tag[w_index]   <= w_tag;
        BTB_valid[w_index] <= i_br_update_valid;
        BTA[w_index]       <= i_br_update_target;
    end
    else begin
        BTB_tag[w_index]   <= BTB_tag[w_index];
        BTB_valid[w_index] <= BTB_valid[w_index];
        BTA[w_index]       <= BTA[w_index];
    end
end


// Outputs
// PC
logic [23:0] r_tag;
logic [5:0]  r_index;
logic        r_valid;
logic        r_exist;

assign r_tag   = i_current_pc[31:8];                // Extract tag   from PC
assign r_index = i_current_pc[7:2];                 // Extract index from PC
assign r_valid = BTB_valid[r_index];
assign r_exist = (r_tag == BTB_tag[r_index]) ? 1 : 0;

assign o_hit          = r_valid & r_exist;                     // Valid entry and tag match
assign o_BTB_target   = BTA[r_index] & {32{o_hit}};         // Predicted target address



endmodule : BTB






module dynamic_predictor(
    input  logic i_clk,
    input  logic i_rstn,
    input  logic i_br_update_en,          // HIGH when actual Branch result from BRU is known
    input  logic i_br_update_taken,    // HIGH when actual Branch result from BRU is TAKEN
    output logic o_prediction_bit      // HIGH when predicted to be taken
);

logic [1:0] D_predictor;
logic [1:0] Q_predictor;

always_ff @(posedge i_clk, negedge i_rstn) begin : Register_with_preset
        if(!i_rstn)        Q_predictor <= 2'b01;
        else               Q_predictor <= D_predictor;

end








// Logic Optimized: br_update_en must be set for changes
saturation_adder_2bit     predictor_adder (
                    .i_carry_in(i_br_update_en   ),
                    .i_sub_mode(i_br_update_taken),
                    .i_data_in (Q_predictor      ),
                    .o_data_out(D_predictor      )
);

assign o_prediction_bit = Q_predictor[1];       // When Predictor >= 2 or Predictor[1] == 1
endmodule : dynamic_predictor



// Circuit Achieved by using Karnaugh map
module saturation_adder_2bit(
    input        i_carry_in,      // Carry in for adding to the data (also acts as enable pin)
    input        i_sub_mode,      // HIGH to enter saturation subtraction
    input  [1:0] i_data_in,
    output [1:0] o_data_out
);

// Rename signal
logic [1:0] X;
logic       Y;
logic       M;

assign X = i_data_in;
assign Y = i_carry_in;
assign M = i_sub_mode;

assign o_data_out[0] = (X[0] & ~Y) | (X[1] & ~X[0] & Y) | (M & ~X[0] & Y) | (M & X[1] & Y);
assign o_data_out[1] = (X[1] & ~Y) | (X[1] &  X[0])     | (M &  X[0] & Y) | (M & X[1] & Y);

endmodule : saturation_adder_2bit
