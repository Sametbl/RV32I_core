module alu_8bit(i_clk, i_rstn, i_a, i_b, i_op_sel, o_result, o_carry);
input        i_clk;
input        i_rstn;
input  [7:0] i_a;
input  [7:0] i_b;
input  [2:0] i_op_sel;
output [7:0] o_result;
output       o_carry;

wire [7:0] result_add;
wire [7:0] result_and;
wire [7:0] result_or;
wire [7:0] result_xor;
wire [7:0] result_not;
wire [7:0] result_shift;

wire [7:0] A;          // Fetched input A
wire [7:0] B;          // Fetched input B
wire [7:0] result_d;   // output result before registered
wire [2:0] op_sel;     // output result before registered
wire       carry_d;    // output carry  before registered

wire       sub_mode;      // Set if perfrom Substration
wire       shift_mode;    // Set if perform Left Shift
wire       shift_out_bit; // Ejected bit from shift operation
wire       cout_adder;    // Carry out of Adder (boh Add and Sub mode)

// Input data fetch
register_8bit   fetch_A (i_clk, i_rstn, i_a, A);
register_8bit   fetch_B (i_clk, i_rstn, i_b, B);
register_3bit   fetch_op(i_clk, i_rstn, i_op_sel, op_sel);



// Sub_mode = (i_op_sel == 3'b001)
comparator_4bit     check_for_SUB(
    .A       ({1'b0, i_op_sel}),
    .B       (4'b0001         ),
    .is_equal(sub_mode        )
);

// Shift_mode = (i_op_sel == 3'b111;)
comparator_4bit     check_for_LEFT_SHIFT(
    .A       ({1'b0, i_op_sel}),
    .B       (4'b0111         ),
    .is_equal(shift_mode      )
);

adder_8bit     u01(A, B, sub_mode, result_add, cout_adder);
and_gate_8bit  u2 (A, B, result_and);
or_gate_8bit   u3 (A, B, result_or );
xor_gate_8bit  u4 (A, B, result_xor);
not_gate_8bit  u5 (A,    result_not);
shifter_8bit   u67(A, B, shift_mode, result_shift);

mux_8x1_8bit  select_result (
    .sel(op_sel      ),
    .A  (result_add  ),   
    .B  (result_add  ),   
    .C  (result_and  ),   
    .D  (result_or   ),   
    .E  (result_xor  ),   
    .F  (result_not  ),   
    .G  (result_shift),   
    .H  (result_shift),   
    .Y  (result_d    )
);

wire   is_logical_op;
// Is not ADD/SUB when op_sel = 3'b1xx or 3'bx1x
or    u8 (is_logical_op, i_op_sel[2], i_op_sel[1]);  

mux_2x1        select_cout (
    .sel(is_logical_op),
    .A  (cout_adder   ),
    .B  (1'b0         ),
    .Y  (carry_d      )
);

// Ouptut buffer
register_8bit   S_buff   (i_clk, i_rstn, result_d, o_result);
d_flipflop      Cout_buff(i_clk, i_rstn, carry_d,  o_carry);

endmodule






// We need 3 bits only but we used 4 bits due to standardization
module comparator_4bit(A, B, is_equal);
input  [3:0]  A;
input  [3:0]  B;
output        is_equal;

wire [3:0] diff;
wire       wire1, wire2, wire3;

xor   diff_1 (diff[0], A[0], B[0]); // diff[0] = ( A[0] != B[0] )
xor   diff_2 (diff[1], A[1], B[1]); // diff[1] = ( A[1] != B[1] )
xor   diff_3 (diff[2], A[2], B[2]); // diff[2] = ( A[2] != B[2] )
xor   diff_4 (diff[3], A[3], B[3]); // diff[3] = ( A[3] != B[3] )

or    u1 (wire1, diff[0], diff[1]); // wire = | (diff)
or    u2 (wire2, wire1,   diff[2]);
or    u3 (wire3, wire2,   diff[3]);

not   u4 (is_equal, wire3);
endmodule
