module RAM_1port    #(parameter int WIDTH = 32,
                      parameter int DEPTH = 8) (
    input  logic [DEPTH-1:0] address,
    input  logic                     clock,
    input  logic [WIDTH-1:0]         data,
    input  logic                     wren,
    output logic [WIDTH-1:0]         q
);

// Internal memory
logic [WIDTH-1:0] mem [0:2**DEPTH -1];

// Output register
always_ff @(posedge clock) begin
    if (wren)    mem[address] <= data;
    q <= mem[address]; // synchronous read
end

endmodule
