module bcd_converter_32bit(
    input  logic        i_clk,
    input  logic        i_rstn,
    input  logic        i_start,
    input  logic [31:0] i_bin,
    output logic        o_done,
    output logic [3:0]  o_bcd[9:0]   // 10 BCD digits, max for 32-bit = 4,294,967,295
);

typedef enum logic [1:0] {
    IDLE,
    SHIFT,
    DONE
} state_t;

state_t           state, next_state;
logic [5:0]       shift_count;         // up to 32 shifts
logic [31:0]      bin_reg;

logic [3:0]       bcd0_D, bcd0_Q, bcd0_D_shifted, bcd0_D_add3;       
logic [3:0]       bcd1_D, bcd1_Q, bcd1_D_shifted, bcd1_D_add3;       
logic [3:0]       bcd2_D, bcd2_Q, bcd2_D_shifted, bcd2_D_add3;       
logic [3:0]       bcd3_D, bcd3_Q, bcd3_D_shifted, bcd3_D_add3;       
logic [3:0]       bcd4_D, bcd4_Q, bcd4_D_shifted, bcd4_D_add3;       
logic [3:0]       bcd5_D, bcd5_Q, bcd5_D_shifted, bcd5_D_add3;       
logic [3:0]       bcd6_D, bcd6_Q, bcd6_D_shifted, bcd6_D_add3;       
logic [3:0]       bcd7_D, bcd7_Q, bcd7_D_shifted, bcd7_D_add3;       
logic [3:0]       bcd8_D, bcd8_Q, bcd8_D_shifted, bcd8_D_add3;       
logic [3:0]       bcd9_D, bcd9_Q, bcd9_D_shifted, bcd9_D_add3; 

// FSM
always_ff @(posedge i_clk or negedge i_rstn) begin
    if (!i_rstn)   state <= IDLE;
    else           state <= next_state;
end

always_comb begin
    next_state = state;
    case (state)
        IDLE:   if (i_start) next_state = SHIFT;
        SHIFT:  if (shift_count == 32) next_state = DONE;
        DONE:   next_state = IDLE;
    endcase
end

// Main logic
always_ff @(posedge i_clk or negedge i_rstn) begin
    if (!i_rstn) begin
        bin_reg     <= 32'd0;
        shift_count <= 6'd0;
        for (int i = 0; i < 10; i++) bcd[i] <= 4'd0;
    end


    else begin
        case (state)
            IDLE: begin
                if (i_start) begin
                    bin_reg     <= i_bin;
                    shift_count <= 6'd0;
                    for (int i = 0; i < 10; i++) bcd[i] <= 4'd0;
                end
            end

            SHIFT: begin
                // Add-3 step
                for (int i = 0; i < 10; i++) begin
                    if (bcd[i] >= 5)    bcd[i] <= bcd[i] + 4'd3;
                end

                // Shift left
                for (int i = 9; i > 0; i--)   bcd[i]      <= {bcd[i][2:0], bcd[i-1][3]};
                                              bcd[0]      <= {bcd[0][2:0], bin_reg[31]};
                                              bin_reg     <= {bin_reg[30:0], 1'b0};
                                              shift_count <= shift_count + 1;
            end
        endcase
    end
end


logic [31:0] shifted_bin_in;

left_shift_register #(.WIDTH(32)) (
    .i_clk       (i_clk),
    .i_rstn      (rst_n),
    .i_en        (),       
    .i_load      (),    
    .i_data      (i_bin),      
    .i_serial_in (1'b0),  
    .o_q         (shifted_bin_in)         
);


assign bcd0_D_shifted[0]   =  shifted_bin_in[31];
assign bcd0_D_shifted[3:1] =  bcd0_D[2:0];
assign bcd0_D_add3         =  bcd0_D_shifted + 4'd3;


register #(.WIDTH(4))  BCD_0 (.clk(i_clk), .rst_n(rst_n), .en(1'b1), .D(bcd_D[0]), .Q(bcd_Q[0]) );
register #(.WIDTH(4))  BCD_1 (.clk(i_clk), .rst_n(rst_n), .en(1'b1), .D(bcd_D[1]), .Q(bcd_Q[1]) );
register #(.WIDTH(4))  BCD_2 (.clk(i_clk), .rst_n(rst_n), .en(1'b1), .D(bcd_D[2]), .Q(bcd_Q[2]) );
register #(.WIDTH(4))  BCD_3 (.clk(i_clk), .rst_n(rst_n), .en(1'b1), .D(bcd_D[3]), .Q(bcd_Q[3]) );
register #(.WIDTH(4))  BCD_4 (.clk(i_clk), .rst_n(rst_n), .en(1'b1), .D(bcd_D[4]), .Q(bcd_Q[4]) );
register #(.WIDTH(4))  BCD_5 (.clk(i_clk), .rst_n(rst_n), .en(1'b1), .D(bcd_D[5]), .Q(bcd_Q[5]) );
register #(.WIDTH(4))  BCD_6 (.clk(i_clk), .rst_n(rst_n), .en(1'b1), .D(bcd_D[6]), .Q(bcd_Q[6]) );
register #(.WIDTH(4))  BCD_7 (.clk(i_clk), .rst_n(rst_n), .en(1'b1), .D(bcd_D[7]), .Q(bcd_Q[7]) );
register #(.WIDTH(4))  BCD_8 (.clk(i_clk), .rst_n(rst_n), .en(1'b1), .D(bcd_D[8]), .Q(bcd_Q[8]) );
register #(.WIDTH(4))  BCD_9 (.clk(i_clk), .rst_n(rst_n), .en(1'b1), .D(bcd_D[9]), .Q(bcd_Q[9]) );



assign o_done = (state == DONE);
assign o_bcd  = bcd;

endmodule














module left_shift_register #(parameter int WIDTH = 8) (
    input  logic             i_clk,
    input  logic             i_rstn,
    input  logic             i_en,         
    input  logic             i_load,     
    input  logic [WIDTH-1:0] i_data,      
    input  logic             i_serial_in, 
    output logic [WIDTH-1:0] o_q          
);

always_ff @(posedge i_clk or negedge i_rstn) begin
    if (!i_rstn)          o_q <= '0;
    else if (i_load)      o_q <= i_data;                           // Load parallel data
    else if (i_en)        o_q <= {o_q[WIDTH-2:0], i_serial_in};    // Right shift
    else                  o_q <= o_q;
end


endmodule
