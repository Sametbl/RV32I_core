package pipeline_pkg;
//---------------- Fetch ----------------------
typedef struct packed {
        logic [31:0] instr      ; // Instruction
        logic [31:0] pc         ; // PC 
        logic        prd_taken  ; // Indicate this instruction is predicted
        logic        valid      ;
} fetch_t ;


typedef struct packed {
        logic        br_update_en        ; // Indicate a Branch is executing in ALU
        logic [31:0] br_update_pc        ; // PC     of the executed Branch instruction
        logic [31:0] br_pc_plus4         ; // PC + 4 of the executed Branch instruction
        logic [31:0] br_target           ; // Target of the executed Branch instruction
        logic        br_taken            ; // Result of the executed Brnach instriction is Taken
        logic        br_valid            ; // The executed Branch instruction is Valid
        logic        br_already_predicted; // Indicate the Branch instruction has been predicted before
} branch_t ;


typedef enum bit [1:0] {
        NN = 2'b00,
        NT = 2'b01,
        TN = 2'b10,
        TT = 2'b11
} predictor_t ;



//---------------- Decode ---------------------
typedef enum logic [3:0] {
        NONE    ,   // 0
        R_TYPE  ,   // 1
        I_TYPE  ,   // 2
        L_TYPE  ,   // 3
        S_TYPE  ,   // 4
        B_TYPE  ,   // 5
        E_TYPE  ,   // 6
        SYS_TYPE    // 7
} instr_type_e;

typedef enum logic [5:0] {
    NOP             = 6'd0,  
    LUI             = 6'd1,  
    AUIPC           = 6'd2,  //-

    JAL             = 6'd3,  
    JALR            = 6'd4,  // -

    BEQ             = 6'd5,  
    BNE             = 6'd6,  
    BLT             = 6'd7,  
    BGE             = 6'd8,  
    BLTU            = 6'd9,  
    BGEU            = 6'd10, // -

    LB              = 6'd11, 
    LH              = 6'd12, 
    LW              = 6'd13, 
    LBU             = 6'd14, 
    LHU             = 6'd15, // -

    SB              = 6'd16, 
    SH              = 6'd17, 
    SW              = 6'd18, // -

    ADDI            = 6'd19, 
    SLTI            = 6'd20, 
    SLTIU           = 6'd21, 
    XORI            = 6'd22, 
    ORI             = 6'd23, 
    ANDI            = 6'd24, 
    SLLI            = 6'd25, 
    SRLI            = 6'd26, 
    SRAI            = 6'd27, // -

    ADD             = 6'd28, 
    SUB             = 6'd29, 
    SLT             = 6'd30, 
    SLTU            = 6'd31, 
    XOR             = 6'd32, 
    OR              = 6'd33, 
    AND             = 6'd34, 
    SLL             = 6'd35, 
    SRL             = 6'd36, 
    SRA             = 6'd37, // -

    ECALL           = 6'd38, 
    EBREAK          = 6'd39, 
    PAUSE           = 6'd40  
} instr_e;



typedef struct packed {
        instr_type_e      instr_type        ;
        instr_e           instr_op          ;
        logic      [4:0]  rs1_addr          ;
        logic      [4:0]  rs2_addr          ;
        logic      [4:0]  rd_addr           ;
        logic      [31:0] imm               ;
        logic      [31:0] pc                ;
        logic             op_a_use_pc       ;    // Indicate operand A uses PC  
        logic             op_b_use_imm      ;    // Indicate operand B uses Immediate
        logic             use_rs1           ;    // Indicate rs1 field actually used to Address Regfile
        logic             use_rs2           ;    // Indicate rs2 field actually used to Address Regfile
        logic             wren              ;    // Writeback enable
        logic      [1:0]  rd_data_sel       ;    // Select signal for Writeback stage

        logic             prd_en            ;    // Enable updating Brnach Prediction BTB
        logic             predicted_instr   ;    // Indicate the instruction is predidcted by BTB

        logic             load_en           ;    // Indicate a Loadf Instruction  
        logic             store_en          ;    // Indicate a Store operation  
        logic             lsu_byte          ;    // Indicate a Load/Store   Byte  operation   
        logic             lsu_halfword      ;    // Indicate a Load/Store 2 Bytes operation    
        logic             lsu_signed        ;    // Indicate a Load operation is sign-extended
        
        logic             valid             ;    // Indicate the instruction is valid to be executed

} decode_t ;



//---------------- Regfile --------------------
typedef struct packed {
        logic [4:0]  rd_addr;
        logic [31:0] rd_data;
        logic        wren;
} writeback_t ;


typedef struct packed {
        logic [4:0]   fwd_rd_addr; // Destination Address to Forwarding unit
        logic [31:0]  fwd_rd_data; // Data to Forwarding Unit
        logic         fwd_allow;   // Fowarding enable (wren & valid)
} fwd_t;



//------------------ U & V-pipe -------------------------
typedef struct packed {
        instr_e       instr_op;
        logic [31:0]  operand_a;
        logic [31:0]  operand_b;
        logic [31:0]  rs1_data;
        logic [31:0]  rs2_data;
        logic [31:0]  pc;
        logic [4:0]   rd_addr;
        logic         wren;               // Enable forwarding (avoid operand == imm or PC)
        logic         prd_en;             // Enable updating Branch instruction (to PRD)
        logic         valid;
        logic         predicted_instr;    // Indicate the instruction is predidcted by BTB
        logic [1:0]   rd_data_sel;        // Indicate the instruction is predidcted by BTB
} alu_t;


typedef struct packed {
        logic [31:0]  rd_data;
        logic [4:0]   rd_addr;
        logic [1:0]   rd_data_sel;
        logic         wren;               // Enable forwarding (avoid operand == imm or PC)
        logic         valid;
} pipe_buff_t;



typedef struct packed {
        logic [31:0] store_data;
        logic        load_en;
        logic        store_en;
        logic        lsu_byte;
        logic        lsu_halfword;
        logic        lsu_signed;
        logic        valid;
} lsu_t;













endpackage
