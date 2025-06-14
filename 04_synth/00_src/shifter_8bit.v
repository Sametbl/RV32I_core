module shifter_8bit(A, B, mode, S);
input   [7:0] A;
input   [7:0] B;
input         mode;
output  [7:0] S;

wire [7:0] A_reversed;
wire [7:0] stage1, stage1_shifted;
wire [7:0] stage2, stage2_shifted;
wire [7:0] stage3, stage3_shifted;
wire [7:0] stage4, stage4_reversed;
wire [1:0] sel_output;


// Check if shift amount > 8
wire       WIRE_1, WIRE_2, WIRE_3;
wire       more_than_8shift; // more_than_8shift = B[7] | B[6] | B[5] | B[4] | B[3]

or  u11(WIRE_1          , B[3]  , B[4]);
or  u12(WIRE_2          , WIRE_1, B[5]);
or  u13(WIRE_3          , WIRE_2, B[6]);
or  u14(more_than_8shift, WIRE_3, B[7]);


reverse_8bit  u1(A, A_reversed);
mux_2x1_8bit  u2(A, A_reversed, mode, stage1);

// Stage 1: if(B[0] = 1) Shift Right Once 
//          else         Pass stage1 (No shift)   
shift_right_1_8bit   u3(stage1, stage1_shifted);
mux_2x1_8bit         u4(stage1, stage1_shifted, B[0], stage2);

// Stage 2: if(B[1] = 1) Shift Right twice 
//          else         Pass stage2 (No shift)   
shift_right_2_8bit   u5(stage2, stage2_shifted);
mux_2x1_8bit         u6(stage2, stage2_shifted, B[1], stage3);

// Stage 3: if(B[2] = 1) Shift Right 4 times 
//          else         Pass stage3 (No shift)   
shift_right_4_8bit   u7(stage3, stage3_shifted);
mux_2x1_8bit         u8(stage3, stage3_shifted, B[2], stage4);


// Stage 4: Reverse once more (For left shift mode)
reverse_8bit  u9 (stage4, stage4_reversed);


// Select output 
assign sel_output[0] = mode; 
assign sel_output[1] = more_than_8shift;

mux_4x1_8bit  u10(
    .sel (sel_output     ),
    .A   (stage4         ), // Right Shift  
    .B   (stage4_reversed), // Left  Shift
    .C   (8'b0000_0000   ), // Shift more than 8 times 
    .D   (8'b0000_0000   ), // Shift more than 8 times 
    .Y   (S              )
);

endmodule


// ================================================================
// ================================================================
module reverse_8bit(In, Out);
input  [7:0] In;
output [7:0] Out;

// Reverse wired connection 
// No logical element used, only simple wiring
assign Out[0] = In[7];
assign Out[1] = In[6];
assign Out[2] = In[5];
assign Out[3] = In[4];
assign Out[4] = In[3];
assign Out[5] = In[2];
assign Out[6] = In[1];
assign Out[7] = In[0];
endmodule

// ================================================================
// ================================================================
module shift_right_1_8bit(In, Out);
input   [7:0]  In; 
output  [7:0]  Out; 

// No logical element used, only simple wiring
assign Out[0] = In[1];
assign Out[1] = In[2];
assign Out[2] = In[3];
assign Out[3] = In[4];
assign Out[4] = In[5];
assign Out[5] = In[6];
assign Out[6] = In[7];
assign Out[7] = 1'b0;  // Newbit = 0

endmodule


// ================================================================
// ================================================================
module shift_right_2_8bit(In, Out);
input   [7:0]  In; 
output  [7:0]  Out; 

// No logical element used, only simple wiring
assign Out[0] = In[2];
assign Out[1] = In[3];
assign Out[2] = In[4];
assign Out[3] = In[5];
assign Out[4] = In[6];
assign Out[5] = In[7];
assign Out[6] = 1'b0;  // Newbit = 0
assign Out[7] = 1'b0;  // Newbit = 0
endmodule


// ================================================================
// ================================================================
module shift_right_4_8bit(In, Out);
input   [7:0]  In; 
output  [7:0]  Out; 

// No logical element used, only simple wiring
assign Out[0] = In[4];
assign Out[1] = In[5];
assign Out[2] = In[6];
assign Out[3] = In[7];
assign Out[4] = 1'b0;
assign Out[5] = 1'b0;
assign Out[6] = 1'b0;
assign Out[7] = 1'b0;  // Newbit = 0
endmodule

