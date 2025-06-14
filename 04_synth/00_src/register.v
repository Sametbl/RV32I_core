module d_flipflop(clk, rstn, d, q);
input        clk;
input        rstn;
input   reg  d;
output  reg  q;

always @(posedge clk, negedge rstn) begin
    if(!rstn)     q <= 1'b0;
    else          q <= d;
end

endmodule


module register_8bit(clk, rstn, d, q);
input             clk;
input             rstn;
input  reg [7:0]  d;
output reg [7:0]  q;

d_flipflop   bit0(clk, rstn, d[0], q[0]);
d_flipflop   bit1(clk, rstn, d[1], q[1]);
d_flipflop   bit2(clk, rstn, d[2], q[2]);
d_flipflop   bit3(clk, rstn, d[3], q[3]);
d_flipflop   bit4(clk, rstn, d[4], q[4]);
d_flipflop   bit5(clk, rstn, d[5], q[5]);
d_flipflop   bit6(clk, rstn, d[6], q[6]);
d_flipflop   bit7(clk, rstn, d[7], q[7]);

endmodule




module register_3bit(clk, rstn, d, q);
input             clk;
input             rstn;
input  reg [2:0]  d;
output reg [2:0]  q;

d_flipflop   bit0(clk, rstn, d[0], q[0]);
d_flipflop   bit1(clk, rstn, d[1], q[1]);
d_flipflop   bit2(clk, rstn, d[2], q[2]);

endmodule

