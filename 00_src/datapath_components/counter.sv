// This file contain 3 modules (all are parameterized)
// 1. up_down_counter  (integrated with both modes)
// 2. up_counter
// 3. down_counter


module up_down_counter #(parameter WIDTH = 32,
                         parameter INIT  = 0)(
    input  logic             clk,
    input  logic             rst_n,      // Active-low async reset
    input  logic             en,         // Count enable
    input  logic             up,         // 1 = up, 0 = down
    input  logic             load_n,     // Active-low load
    input  logic [WIDTH-1:0] load_data,  // Value to load
    output logic [WIDTH-1:0] count       // Current count value
);

always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)        count <= INIT;
        else if (!load_n)  count <= load_data;
        else if (en)       count <= up ? count + 1 : count - 1;
        else               count <= count;
end

endmodule : up_down_counter


// ==========================================================================
module up_counter #(parameter WIDTH = 32,
                    parameter INIT  = 0)(
    input  logic             clk,
    input  logic             rst_n,    // Active-low async reset
    input  logic             en,       // Count enable
    output logic [WIDTH-1:0] count
);

always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)        count <= INIT;
        else if (en)       count <= count + 1;
        else               count <= count;
end
endmodule : up_counter



// ==========================================================================
module down_counter #(parameter WIDTH = 8,
                      parameter INIT  = {WIDTH{1'b1}}) (   // default to all 1s (max value)
    input  logic             clk,
    input  logic             rst_n,
    input  logic             en,
    output logic [WIDTH-1:0] count
);

always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)        count <= INIT;
        else if (en)       count <= count - 1;
        else               count <= count;
end
endmodule : down_counter




