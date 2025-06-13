module instruction_cache(
  input  logic         clock,
  input  logic         rden,
  input  logic [31:0]  address,
  output logic [31:0]  q   // 64-bit output for two instructions
);

reg   [7:0]  imem [0: 2**11-1]; // 2 KB memory
logic [31:0] cache_addr;
initial $readmemh("./../../01_tb/program/Load_Store.hex", imem);

// FIXME: Division by 4 due to ROM in Quartus is not byte-addressible
assign cache_addr = address << 2; 


always_ff @(posedge clock) begin
    if(rden) begin
      // FIXME: Change to Little Endian later
          q[7:0]    <= imem[cache_addr + 3];
          q[15:8]   <= imem[cache_addr + 2];
          q[23:16]  <= imem[cache_addr + 1];
          q[31:24]  <= imem[cache_addr    ];
    end
    else  q         <= q;
end

endmodule : instruction_cache



