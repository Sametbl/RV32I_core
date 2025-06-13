module encoder_64to6 (
    input  logic [63:0] in,
    output logic [5:0]  out
);

    always_comb begin
        case (1'b1)
            in[0]  : out = 6'd0;
            in[1]  : out = 6'd1;
            in[2]  : out = 6'd2;
            in[3]  : out = 6'd3;
            in[4]  : out = 6'd4;
            in[5]  : out = 6'd5;
            in[6]  : out = 6'd6;
            in[7]  : out = 6'd7;
            in[8]  : out = 6'd8;
            in[9]  : out = 6'd9;
            in[10] : out = 6'd10;
            in[11] : out = 6'd11;
            in[12] : out = 6'd12;
            in[13] : out = 6'd13;
            in[14] : out = 6'd14;
            in[15] : out = 6'd15;
            in[16] : out = 6'd16;
            in[17] : out = 6'd17;
            in[18] : out = 6'd18;
            in[19] : out = 6'd19;
            in[20] : out = 6'd20;
            in[21] : out = 6'd21;
            in[22] : out = 6'd22;
            in[23] : out = 6'd23;
            in[24] : out = 6'd24;
            in[25] : out = 6'd25;
            in[26] : out = 6'd26;
            in[27] : out = 6'd27;
            in[28] : out = 6'd28;
            in[29] : out = 6'd29;
            in[30] : out = 6'd30;
            in[31] : out = 6'd31;
            in[32] : out = 6'd32;
            in[33] : out = 6'd33;
            in[34] : out = 6'd34;
            in[35] : out = 6'd35;
            in[36] : out = 6'd36;
            in[37] : out = 6'd37;
            in[38] : out = 6'd38;
            in[39] : out = 6'd39;
            in[40] : out = 6'd40;
            in[41] : out = 6'd41;
            in[42] : out = 6'd42;
            in[43] : out = 6'd43;
            in[44] : out = 6'd44;
            in[45] : out = 6'd45;
            in[46] : out = 6'd46;
            in[47] : out = 6'd47;
            in[48] : out = 6'd48;
            in[49] : out = 6'd49;
            in[50] : out = 6'd50;
            in[51] : out = 6'd51;
            in[52] : out = 6'd52;
            in[53] : out = 6'd53;
            in[54] : out = 6'd54;
            in[55] : out = 6'd55;
            in[56] : out = 6'd56;
            in[57] : out = 6'd57;
            in[58] : out = 6'd58;
            in[59] : out = 6'd59;
            in[60] : out = 6'd60;
            in[61] : out = 6'd61;
            in[62] : out = 6'd62;
            in[63] : out = 6'd63;
            default: out = 6'd0;
        endcase
    end

endmodule : encoder_64to6






module encoder_16to4 (
    input  logic [15:0] in,
    output logic [3:0]  out
);

    always_comb begin
        out = 4'd0;

        case (1'b1)
            in[0]  : out = 4'd0;
            in[1]  : out = 4'd1;
            in[2]  : out = 4'd2;
            in[3]  : out = 4'd3;
            in[4]  : out = 4'd4;
            in[5]  : out = 4'd5;
            in[6]  : out = 4'd6;
            in[7]  : out = 4'd7;
            in[8]  : out = 4'd8;
            in[9]  : out = 4'd9;
            in[10] : out = 4'd10;
            in[11] : out = 4'd11;
            in[12] : out = 4'd12;
            in[13] : out = 4'd13;
            in[14] : out = 4'd14;
            in[15] : out = 4'd15;
            default: out = 4'd0;  // Optional fallback
        endcase
    end

endmodule : encoder_16to4
