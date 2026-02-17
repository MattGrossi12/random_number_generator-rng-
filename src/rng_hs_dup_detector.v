module rng_hs_dup_detector
#(
    parameter DEPTH         = 72,                       //Profundidade
    parameter T_DEPTH       = (DEPTH-1),                //Profundidade real
    parameter WIDTH         = 3,                        //Largura
    parameter T_WIDTH       = (WIDTH-1),                //Largura "real" para uso vetorial
    parameter SEED_TOT_NUMB = 12,                        //Total de números das seeds agrupados
    parameter SD_T_TOT_NUMB = (SEED_TOT_NUMB - 1),      //Total "real" de números das seeds agrupados
    parameter COUNT_WIDTH   = $clog2(SEED_TOT_NUMB),    //Largura do contador de ciclos
    parameter T_COUNT_WID   = (COUNT_WIDTH-1)           //Largura "real" para uso vetorial
)(
    input clk_i,
    input rst_i,
    input req_num_i,
    input [T_WIDTH:0] data_i,
    input wr_i,

    output reg [T_WIDTH:0] data_o,
    output reg req_new_num_o
);
//Tempory-memory
reg [T_WIDTH:0] temp_mem;

//Memory-Bank:
reg [T_WIDTH:0] mem [0:SD_T_TOT_NUMB];

//Explode-bank:
wire [T_WIDTH:0] mem_0  = mem[0];
wire [T_WIDTH:0] mem_1  = mem[1];
wire [T_WIDTH:0] mem_2  = mem[2];
wire [T_WIDTH:0] mem_3  = mem[3];
wire [T_WIDTH:0] mem_4  = mem[4];
wire [T_WIDTH:0] mem_5  = mem[5];
wire [T_WIDTH:0] mem_6  = mem[6];
wire [T_WIDTH:0] mem_7  = mem[7];
wire [T_WIDTH:0] mem_8  = mem[8];
wire [T_WIDTH:0] mem_9  = mem[9];
wire [T_WIDTH:0] mem_10 = mem[10];
wire [T_WIDTH:0] mem_11 = mem[11];

//Validador bi-causal:
reg [SD_T_TOT_NUMB:0] vld;

//Sinal espelho para detecção de mudança de estado:
//reg wr_dec;
reg wr_reg;
reg wr_stb;

//Variável para laço for:
integer i;

wire z_state;
reg next_state;
reg rqn;

//Buffers de sincronia:
reg wr_ff1, wr_ff2, wr_ff2_d;

// FSM-STATES:
localparam APPROVE  = 1'b1;
localparam DECLINE  = 1'b0;

/*
Temos 2 estados em nossa FSM:

o 1* é o Rejeitar número, ocorre sempre que o valor de temp_mem for igual a qualquer número presente na memória
e pede um novo número com req_new_num.

o 2* é o Enviar número, ocorre quando o número de temp_mem é diferente de qualquer número presente na memória,
Neste estado, os bits de validação não podem ser iguais, portanto operação end entre validar e integrantes da memória deve dar falso booleano
e não pede por um novo número com req_new_num.
*/

//------------------------------------------------------------
//Control-Path:
always @(*)
    begin 
            req_new_num_o = rqn & req_num_i;
    /*------------------------------------------------------------
                    Estado REJEITADO:
    ------------------------------------------------------------*/
        if  (
            (vld[0]  && data_i==mem[0])  ||
            (vld[1]  && data_i==mem[1])  ||
            (vld[2]  && data_i==mem[2])  ||
            (vld[3]  && data_i==mem[3])  ||
            (vld[4]  && data_i==mem[4])  ||
            (vld[5]  && data_i==mem[5])  ||
            (vld[6]  && data_i==mem[6])  ||
            (vld[7]  && data_i==mem[7])  ||
            (vld[8]  && data_i==mem[8])  ||
            (vld[9]  && data_i==mem[9])  ||
            (vld[10] && data_i==mem[10]) ||
            (vld[11] && data_i==mem[11])
            )

            begin
                next_state = DECLINE;
            end
/*------------------------------------------------------------
                    Estado APROVADO
------------------------------------------------------------*/

        else
            begin
                next_state = APPROVE;
            end
    end

//Determinação do valor de saída:
always @(*)
    begin 
        if(next_state == APPROVE)
            begin
                if(data_o == temp_mem) temp_mem = 0;
                else temp_mem = data_i;
            end
        else
            begin
                temp_mem = 0;
            end
    end

//------------------------------------------------------------
//Data-path:
//------------------------------------------------------------

//Cria o sinal detector de borda em write, evitando bugs de botão pressionado incrementa pra sempre:
always @(posedge clk_i or negedge rst_i) 
begin
    if(!rst_i) 
        begin
            wr_ff1   <= 1'b0;
            wr_ff2   <= 1'b0;
            wr_ff2_d <= 1'b0;
        end 
    else 
        begin
            wr_ff1   <= wr_i;      // amostra assíncrono
            wr_ff2   <= wr_ff1;    // sincroniza
            wr_ff2_d <= wr_ff2;    // atraso 1 ciclo
        end
end

//wire wr_dec = wr_ff2 ^ wr_ff2_d; 
wire wr_dec = wr_ff2 & ~wr_ff2_d;

//Controlador do shift e req:
always@(posedge clk_i or negedge rst_i)
    begin
        if(!rst_i)
            begin
                vld     <= 0;
                //Reinicia a memória inteira:   
                for (i=0; i<SD_T_TOT_NUMB; i=i+1)   
                    mem[i]  <= 0;
            end
        else
            begin
                if(next_state == APPROVE)
                    begin
                        //Se wr_dec for 1, gravamos o dado
                        if(wr_dec)
                        begin
                            //Operação de shift:
                            // shift de 64 posições
                            mem[0]  <= temp_mem;
                            mem[1]  <= mem[0];
                            mem[2]  <= mem[1];
                            mem[3]  <= mem[2];
                            mem[4]  <= mem[3];
                            mem[5]  <= mem[4];
                            mem[6]  <= mem[5];
                            mem[7]  <= mem[6];
                            mem[8]  <= mem[7];
                            mem[9]  <= mem[8];
                            mem[10] <= mem[9];
                            mem[11] <= mem[10];

                            // shift de validade (64 bits)
                            vld[0]  <= 1'b1;
                            vld[1]  <= vld[0];
                            vld[2]  <= vld[1];
                            vld[3]  <= vld[2];
                            vld[4]  <= vld[3];
                            vld[5]  <= vld[4];
                            vld[6]  <= vld[5];
                            vld[7]  <= vld[6];
                            vld[8]  <= vld[7];
                            vld[9]  <= vld[8];
                            vld[10] <= vld[9];
                            vld[11] <= vld[10];

                            //Envio:
                            data_o          <= temp_mem;
                            rqn             <= 0;
                            wr_stb          <= 1;
                        end
                        else
                        //Senão for 1, aguarda novos dados:
                            begin
                            //Apenas mantém parado
                            mem[0]  <= mem[0];
                            mem[1]  <= mem[1];
                            mem[2]  <= mem[2];
                            mem[3]  <= mem[3];
                            mem[4]  <= mem[4];
                            mem[5]  <= mem[5];
                            mem[6]  <= mem[6];
                            mem[7]  <= mem[7];
                            mem[8]  <= mem[8];
                            mem[9]  <= mem[9];
                            mem[10] <= mem[10];
                            mem[11] <= mem[11];

                            // mantém vld[0..63]
                            vld[0]  <= vld[0];
                            vld[1]  <= vld[1];
                            vld[2]  <= vld[2];
                            vld[3]  <= vld[3];
                            vld[4]  <= vld[4];
                            vld[5]  <= vld[5];
                            vld[6]  <= vld[6];
                            vld[7]  <= vld[7];
                            vld[8]  <= vld[8];
                            vld[9]  <= vld[9];
                            vld[10] <= vld[10];
                            vld[11] <= vld[11];
                            
                            //Envio:
                            data_o          <= z_state;
                            rqn             <= 0;
                            wr_stb          <= 0;
                            end
                        end
                else
                    begin
                        // mantém mem[0..63]
                        mem[0]  <= mem[0];
                        mem[1]  <= mem[1];
                        mem[2]  <= mem[2];
                        mem[3]  <= mem[3];
                        mem[4]  <= mem[4];
                        mem[5]  <= mem[5];
                        mem[6]  <= mem[6];
                        mem[7]  <= mem[7];
                        mem[8]  <= mem[8];
                        mem[9]  <= mem[9];
                        mem[10] <= mem[10];
                        mem[11] <= mem[11];

                        // mantém vld[0..63]
                        vld[0]  <= vld[0];
                        vld[1]  <= vld[1];
                        vld[2]  <= vld[2];
                        vld[3]  <= vld[3];
                        vld[4]  <= vld[4];
                        vld[5]  <= vld[5];
                        vld[6]  <= vld[6];
                        vld[7]  <= vld[7];
                        vld[8]  <= vld[8];
                        vld[9]  <= vld[9];
                        vld[10] <= vld[10];
                        vld[11] <= vld[11];
                    
                        data_o          <= z_state;
                        rqn             <= 1;
                        wr_stb          <= 0;
                    end
            end
    end

endmodule