module rng_hs_dup_detector
#(
    parameter DEPTH         = 72,
    parameter T_DEPTH       = (DEPTH-1),
    parameter WIDTH         = 3,
    parameter T_WIDTH       = (WIDTH-1),
    parameter SEED_TOT_NUMB = 8,
    parameter SD_T_TOT_NUMB = (SEED_TOT_NUMB - 1),
    //parameter COUNT_WIDTH   = $clog2(SEED_TOT_NUMB),    //Largura do contador de ciclos
    parameter COUNT_WIDTH   = 5,                          //Largura do contador de ciclos
    parameter T_COUNT_WID   = (COUNT_WIDTH-1)
)(
    input                   clk_i,
    input                   rst_i,
    input                   req_num_i,
    input  [T_WIDTH:0]      data_i,
    input                   wr_i,

    output reg [T_WIDTH:0]  data_o,
    output reg              req_new_num_o
);

    // Memory bank
    reg [T_WIDTH:0] mem [0:SD_T_TOT_NUMB];
    reg [SD_T_TOT_NUMB:0] vld;

    // Sync + edge detect for wr_i
    reg wr_ff1, wr_ff2, wr_ff2_d;
    reg wr_pulse;

    //Conditionals:
    wire approve;
    wire hit;

    integer i;

    // Duplicate detection (combinational)
    assign hit =

        (vld[0]  && (data_i == mem[0]))  ||
        (vld[1]  && (data_i == mem[1]))  ||
        (vld[2]  && (data_i == mem[2]))  ||
        (vld[3]  && (data_i == mem[3]))  ||
        (vld[4]  && (data_i == mem[4]))  ||
        (vld[5]  && (data_i == mem[5]))  ||
        (vld[6]  && (data_i == mem[6]))  ||
        (vld[7]  && (data_i == mem[7]));

    assign approve = ~hit;

    // Combinational request: pede novo número quando detecta duplicata
    always @(*) begin
        req_new_num_o = req_num_i & ~approve;
    end


always @(posedge clk_i or negedge rst_i) 
    begin
    if (!rst_i) begin
            wr_ff1   <= 1'b0;
            wr_ff2   <= 1'b0;
            wr_ff2_d <= 1'b0;
            wr_pulse <= 1'b0;
        end else begin
            wr_ff1   <= wr_i;
            wr_ff2   <= wr_ff1;
            wr_ff2_d <= wr_ff2;

            // pulso de 1 ciclo quando wr_ff2 sobe
            wr_pulse <= (wr_ff2 & ~wr_ff2_d);
        end
    end

    // Main sequential datapath
    always @(posedge clk_i or negedge rst_i) 
    begin
        if (!rst_i) begin
            vld    <= { (SD_T_TOT_NUMB+1){1'b0} };
            data_o <= { (T_WIDTH+1){1'b0} };

            for (i = 0; i <= SD_T_TOT_NUMB; i = i + 1) begin
                mem[i] <= { (T_WIDTH+1){1'b0} };
            end
        end else begin
            // default: mantém saída (evita Z)
            data_o <= data_o;

            // Só escreve quando:
            //  - aprovou (não é duplicado)
            //  - chegou pulso de write sincronizado
            if (approve && wr_pulse) begin
                // shift do banco
                mem[7]  <= mem[6];
                mem[6]  <= mem[5];
                mem[5]  <= mem[4];
                mem[4]  <= mem[3];
                mem[3]  <= mem[2];
                mem[2]  <= mem[1];
                mem[1]  <= mem[0];
                mem[0]  <= data_i;

                // shift de validade
                vld[7]  <= vld[6];
                vld[6]  <= vld[5];
                vld[5]  <= vld[4];
                vld[4]  <= vld[3];
                vld[3]  <= vld[2];
                vld[2]  <= vld[1];
                vld[1]  <= vld[0];
                vld[0]  <= 1'b1;

                // saída alinhada com o que entrou na memória
                data_o <= data_i;
            end
        end
    end

endmodule