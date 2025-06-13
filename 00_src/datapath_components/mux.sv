module mux_32x1   #(parameter int WIDTH = 32)(
    input  logic [4:0]       sel,
    input  logic [WIDTH-1:0] i_0,  
    input  logic [WIDTH-1:0] i_1,  
    input  logic [WIDTH-1:0] i_2,  
    input  logic [WIDTH-1:0] i_3,  
    input  logic [WIDTH-1:0] i_4,  
    input  logic [WIDTH-1:0] i_5,  
    input  logic [WIDTH-1:0] i_6,  
    input  logic [WIDTH-1:0] i_7,  
    input  logic [WIDTH-1:0] i_8,  
    input  logic [WIDTH-1:0] i_9,  
    input  logic [WIDTH-1:0] i_10,  
    input  logic [WIDTH-1:0] i_11,  
    input  logic [WIDTH-1:0] i_12,  
    input  logic [WIDTH-1:0] i_13,  
    input  logic [WIDTH-1:0] i_14,  
    input  logic [WIDTH-1:0] i_15, 
    input  logic [WIDTH-1:0] i_16, 
    input  logic [WIDTH-1:0] i_17, 
    input  logic [WIDTH-1:0] i_18, 
    input  logic [WIDTH-1:0] i_19, 
    input  logic [WIDTH-1:0] i_20, 
    input  logic [WIDTH-1:0] i_21, 
    input  logic [WIDTH-1:0] i_22, 
    input  logic [WIDTH-1:0] i_23, 
    input  logic [WIDTH-1:0] i_24, 
    input  logic [WIDTH-1:0] i_25, 
    input  logic [WIDTH-1:0] i_26, 
    input  logic [WIDTH-1:0] i_27, 
    input  logic [WIDTH-1:0] i_28, 
    input  logic [WIDTH-1:0] i_29, 
    input  logic [WIDTH-1:0] i_30, 
    input  logic [WIDTH-1:0] i_31, 
    output logic [WIDTH-1:0] o_mux
);

always_comb begin
    case (sel)
        5'd0:   o_mux = i_0;
        5'd1:   o_mux = i_1;
        5'd2:   o_mux = i_2;
        5'd3:   o_mux = i_3;
        5'd4:   o_mux = i_4;
        5'd5:   o_mux = i_5;
        5'd6:   o_mux = i_6;
        5'd7:   o_mux = i_7;
        5'd8:   o_mux = i_8;
        5'd9:   o_mux = i_9;
        5'd10:  o_mux = i_10;
        5'd11:  o_mux = i_11;
        5'd12:  o_mux = i_12;
        5'd13:  o_mux = i_13;
        5'd14:  o_mux = i_14;
        5'd15:  o_mux = i_15;
        5'd16:  o_mux = i_16;
        5'd17:  o_mux = i_17;
        5'd18:  o_mux = i_18;
        5'd19:  o_mux = i_19;
        5'd20:  o_mux = i_20;
        5'd21:  o_mux = i_21;
        5'd22:  o_mux = i_22;
        5'd23:  o_mux = i_23;
        5'd24:  o_mux = i_24;
        5'd25:  o_mux = i_25;
        5'd26:  o_mux = i_26;
        5'd27:  o_mux = i_27;
        5'd28:  o_mux = i_28;
        5'd29:  o_mux = i_29;
        5'd30:  o_mux = i_30;
        5'd31:  o_mux = i_31;
    endcase
end
endmodule


// =====================================================================================
// =====================================================================================


module mux_16x1   #(parameter int WIDTH = 32)(
    input  logic [3:0]       sel,
    input  logic [WIDTH-1:0] i_0,  
    input  logic [WIDTH-1:0] i_1,  
    input  logic [WIDTH-1:0] i_2,  
    input  logic [WIDTH-1:0] i_3,  
    input  logic [WIDTH-1:0] i_4,  
    input  logic [WIDTH-1:0] i_5,  
    input  logic [WIDTH-1:0] i_6,  
    input  logic [WIDTH-1:0] i_7,  
    input  logic [WIDTH-1:0] i_8,  
    input  logic [WIDTH-1:0] i_9,  
    input  logic [WIDTH-1:0] i_10,  
    input  logic [WIDTH-1:0] i_11,  
    input  logic [WIDTH-1:0] i_12,  
    input  logic [WIDTH-1:0] i_13,  
    input  logic [WIDTH-1:0] i_14,  
    input  logic [WIDTH-1:0] i_15,  
    output logic [WIDTH-1:0] o_mux
);

always_comb begin
    case (sel)
        4'd0:  o_mux = i_0;
        4'd1:  o_mux = i_1;
        4'd2:  o_mux = i_2;
        4'd3:  o_mux = i_3;
        4'd4:  o_mux = i_4;
        4'd5:  o_mux = i_5;
        4'd6:  o_mux = i_6;
        4'd7:  o_mux = i_7;
        4'd8:  o_mux = i_8;
        4'd9:  o_mux = i_9;
        4'd10: o_mux = i_10;
        4'd11: o_mux = i_11;
        4'd12: o_mux = i_12;
        4'd13: o_mux = i_13;
        4'd14: o_mux = i_14;
        4'd15: o_mux = i_15;
    endcase
end
endmodule


// =====================================================================================
// =====================================================================================

module mux_8x1   #(parameter int WIDTH = 32)(
    input  logic [2:0]       sel,
    input  logic [WIDTH-1:0] i_0,  
    input  logic [WIDTH-1:0] i_1,  
    input  logic [WIDTH-1:0] i_2,  
    input  logic [WIDTH-1:0] i_3,  
    input  logic [WIDTH-1:0] i_4,  
    input  logic [WIDTH-1:0] i_5,  
    input  logic [WIDTH-1:0] i_6,  
    input  logic [WIDTH-1:0] i_7,  
    output logic [WIDTH-1:0] o_mux
);

always_comb begin
    case (sel)
        3'd0: o_mux = i_0;
        3'd1: o_mux = i_1;
        3'd2: o_mux = i_2;
        3'd3: o_mux = i_3;
        3'd4: o_mux = i_4;
        3'd5: o_mux = i_5;
        3'd6: o_mux = i_6;
        3'd7: o_mux = i_7;
    endcase
end
endmodule

// =====================================================================================
// =====================================================================================

module mux_4x1   #(parameter int WIDTH = 32)(
    input  logic [1:0]       sel,
    input  logic [WIDTH-1:0] i_0,  
    input  logic [WIDTH-1:0] i_1,  
    input  logic [WIDTH-1:0] i_2,  
    input  logic [WIDTH-1:0] i_3,  
    output logic [WIDTH-1:0] o_mux
);

always_comb begin
    case (sel)
        2'b00: o_mux = i_0;
        2'b01: o_mux = i_1;
        2'b10: o_mux = i_2;
        2'b11: o_mux = i_3;
    endcase
end
endmodule


// =====================================================================================
// =====================================================================================

module mux_2x1   #(parameter int WIDTH = 32)(
    input  logic             sel,
    input  logic [WIDTH-1:0] i_0,  
    input  logic [WIDTH-1:0] i_1,  
    output logic [WIDTH-1:0] o_mux
);


always_comb begin
    case (sel)
        1'b0: o_mux = i_0;
        1'b1: o_mux = i_1;
    endcase
end

endmodule

