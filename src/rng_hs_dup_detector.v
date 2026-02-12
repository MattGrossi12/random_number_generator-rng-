module rng_hs_dup_detector
#(
    parameter DEPTH         = 72,                       //Profundidade
    parameter T_DEPTH       = (DEPTH-1),                //Profundidade real
    parameter WIDTH         = 8,                        //Largura
    parameter T_WIDTH       = (WIDTH-1),                //Largura "real" para uso vetorial
    parameter SEED_TOT_NUMB = 64,                       //Total de números das seeds agrupados
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
wire [T_WIDTH:0] mem_12 = mem[12];
wire [T_WIDTH:0] mem_13 = mem[13];
wire [T_WIDTH:0] mem_14 = mem[14];
wire [T_WIDTH:0] mem_15 = mem[15];
wire [T_WIDTH:0] mem_16 = mem[16];
wire [T_WIDTH:0] mem_17 = mem[17];
wire [T_WIDTH:0] mem_18 = mem[18];
wire [T_WIDTH:0] mem_19 = mem[19];
wire [T_WIDTH:0] mem_20 = mem[20];
wire [T_WIDTH:0] mem_21 = mem[21];
wire [T_WIDTH:0] mem_22 = mem[22];
wire [T_WIDTH:0] mem_23 = mem[23];
wire [T_WIDTH:0] mem_24 = mem[24];
wire [T_WIDTH:0] mem_25 = mem[25];
wire [T_WIDTH:0] mem_26 = mem[26];
wire [T_WIDTH:0] mem_27 = mem[27];
wire [T_WIDTH:0] mem_28 = mem[28];
wire [T_WIDTH:0] mem_29 = mem[29];
wire [T_WIDTH:0] mem_30 = mem[30];
wire [T_WIDTH:0] mem_31 = mem[31];
wire [T_WIDTH:0] mem_32 = mem[32];
wire [T_WIDTH:0] mem_33 = mem[33];
wire [T_WIDTH:0] mem_34 = mem[34];
wire [T_WIDTH:0] mem_35 = mem[35];
wire [T_WIDTH:0] mem_36 = mem[36];
wire [T_WIDTH:0] mem_37 = mem[37];
wire [T_WIDTH:0] mem_38 = mem[38];
wire [T_WIDTH:0] mem_39 = mem[39];
wire [T_WIDTH:0] mem_40 = mem[40];
wire [T_WIDTH:0] mem_41 = mem[41];
wire [T_WIDTH:0] mem_42 = mem[42];
wire [T_WIDTH:0] mem_43 = mem[43];
wire [T_WIDTH:0] mem_44 = mem[44];
wire [T_WIDTH:0] mem_45 = mem[45];
wire [T_WIDTH:0] mem_46 = mem[46];
wire [T_WIDTH:0] mem_47 = mem[47];
wire [T_WIDTH:0] mem_48 = mem[48];
wire [T_WIDTH:0] mem_49 = mem[49];
wire [T_WIDTH:0] mem_50 = mem[50];
wire [T_WIDTH:0] mem_51 = mem[51];
wire [T_WIDTH:0] mem_52 = mem[52];
wire [T_WIDTH:0] mem_53 = mem[53];
wire [T_WIDTH:0] mem_54 = mem[54];
wire [T_WIDTH:0] mem_55 = mem[55];
wire [T_WIDTH:0] mem_56 = mem[56];
wire [T_WIDTH:0] mem_57 = mem[57];
wire [T_WIDTH:0] mem_58 = mem[58];
wire [T_WIDTH:0] mem_59 = mem[59];
wire [T_WIDTH:0] mem_60 = mem[60];
wire [T_WIDTH:0] mem_61 = mem[61];
wire [T_WIDTH:0] mem_62 = mem[62];
wire [T_WIDTH:0] mem_63 = mem[63];

//Validador bi-causal:
reg [SD_T_TOT_NUMB:0] vld;

//Sinal espelho para detecção de mudança de estado:
//reg wr_dec;
reg wr_reg;
reg wr_stb;

//Variável para laço for:
integer i;

reg x_state;
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
            (vld[11] && data_i==mem[11]) ||
            (vld[12] && data_i==mem[12]) ||
            (vld[13] && data_i==mem[13]) ||
            (vld[14] && data_i==mem[14]) ||
            (vld[15] && data_i==mem[15]) ||
            (vld[16] && data_i==mem[16]) ||
            (vld[17] && data_i==mem[17]) ||
            (vld[18] && data_i==mem[18]) ||
            (vld[19] && data_i==mem[19]) ||
            (vld[20] && data_i==mem[20]) ||
            (vld[21] && data_i==mem[21]) ||
            (vld[22] && data_i==mem[22]) ||
            (vld[23] && data_i==mem[23]) ||
            (vld[24] && data_i==mem[24]) ||
            (vld[25] && data_i==mem[25]) ||
            (vld[26] && data_i==mem[26]) ||
            (vld[27] && data_i==mem[27]) ||
            (vld[28] && data_i==mem[28]) ||
            (vld[29] && data_i==mem[29]) ||
            (vld[30] && data_i==mem[30]) ||
            (vld[31] && data_i==mem[31]) ||
            (vld[32] && data_i==mem[32]) ||
            (vld[33] && data_i==mem[33]) ||
            (vld[34] && data_i==mem[34]) ||
            (vld[35] && data_i==mem[35]) ||
            (vld[36] && data_i==mem[36]) ||
            (vld[37] && data_i==mem[37]) ||
            (vld[38] && data_i==mem[38]) ||
            (vld[39] && data_i==mem[39]) ||
            (vld[40] && data_i==mem[40]) ||
            (vld[41] && data_i==mem[41]) ||
            (vld[42] && data_i==mem[42]) ||
            (vld[43] && data_i==mem[43]) ||
            (vld[44] && data_i==mem[44]) ||
            (vld[45] && data_i==mem[45]) ||
            (vld[46] && data_i==mem[46]) ||
            (vld[47] && data_i==mem[47]) ||
            (vld[48] && data_i==mem[48]) ||
            (vld[49] && data_i==mem[49]) ||
            (vld[50] && data_i==mem[50]) ||
            (vld[51] && data_i==mem[51]) ||
            (vld[52] && data_i==mem[52]) ||
            (vld[53] && data_i==mem[53]) ||
            (vld[54] && data_i==mem[54]) ||
            (vld[55] && data_i==mem[55]) ||
            (vld[56] && data_i==mem[56]) ||
            (vld[57] && data_i==mem[57]) ||
            (vld[58] && data_i==mem[58]) ||
            (vld[59] && data_i==mem[59]) ||
            (vld[60] && data_i==mem[60]) ||
            (vld[61] && data_i==mem[61]) ||
            (vld[62] && data_i==mem[62]) ||
            (vld[63] && data_i==mem[63])
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
                if(data_o == temp_mem) temp_mem = x_state;
                else temp_mem = data_i;
            end
        else
            begin
                temp_mem = x_state;
            end
    end

//------------------------------------------------------------
//Data-path:
//------------------------------------------------------------

//Cria o sinal detector de borda em write, evitando bugs de botão pressionado incrementa pra sempre:
always @(posedge clk_i or negedge rst_i) begin
  if(!rst_i) begin
    wr_ff1   <= 1'b0;
    wr_ff2   <= 1'b0;
    wr_ff2_d <= 1'b0;
  end else begin
    wr_ff1   <= wr_i;      // amostra assíncrono
    wr_ff2   <= wr_ff1;    // sincroniza
    wr_ff2_d <= wr_ff2;    // atraso 1 ciclo
  end
end

wire wr_dec = wr_ff2 ^ wr_ff2_d;  // pulso de 1 ciclo em QUALQUER borda

//Controlador do shift e req:
always@(posedge clk_i or negedge rst_i)
    begin
        if(!rst_i)
            begin
                //Reinicia a memória inteira:   
                for (i=0; i<SD_T_TOT_NUMB; i=i+1)   
                    mem[i]  <= x_state;
                    vld     <= x_state;
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
                            mem[12] <= mem[11];
                            mem[13] <= mem[12];
                            mem[14] <= mem[13];
                            mem[15] <= mem[14];
                            mem[16] <= mem[15];
                            mem[17] <= mem[16];
                            mem[18] <= mem[17];
                            mem[19] <= mem[18];
                            mem[20] <= mem[19];
                            mem[21] <= mem[20];
                            mem[22] <= mem[21];
                            mem[23] <= mem[22];
                            mem[24] <= mem[23];
                            mem[25] <= mem[24];
                            mem[26] <= mem[25];
                            mem[27] <= mem[26];
                            mem[28] <= mem[27];
                            mem[29] <= mem[28];
                            mem[30] <= mem[29];
                            mem[31] <= mem[30];
                            mem[32] <= mem[31];
                            mem[33] <= mem[32];
                            mem[34] <= mem[33];
                            mem[35] <= mem[34];
                            mem[36] <= mem[35];
                            mem[37] <= mem[36];
                            mem[38] <= mem[37];
                            mem[39] <= mem[38];
                            mem[40] <= mem[39];
                            mem[41] <= mem[40];
                            mem[42] <= mem[41];
                            mem[43] <= mem[42];
                            mem[44] <= mem[43];
                            mem[45] <= mem[44];
                            mem[46] <= mem[45];
                            mem[47] <= mem[46];
                            mem[48] <= mem[47];
                            mem[49] <= mem[48];
                            mem[50] <= mem[49];
                            mem[51] <= mem[50];
                            mem[52] <= mem[51];
                            mem[53] <= mem[52];
                            mem[54] <= mem[53];
                            mem[55] <= mem[54];
                            mem[56] <= mem[55];
                            mem[57] <= mem[56];
                            mem[58] <= mem[57];
                            mem[59] <= mem[58];
                            mem[60] <= mem[59];
                            mem[61] <= mem[60];
                            mem[62] <= mem[61];
                            mem[63] <= mem[62];

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
                            vld[12] <= vld[11];
                            vld[13] <= vld[12];
                            vld[14] <= vld[13];
                            vld[15] <= vld[14];
                            vld[16] <= vld[15];
                            vld[17] <= vld[16];
                            vld[18] <= vld[17];
                            vld[19] <= vld[18];
                            vld[20] <= vld[19];
                            vld[21] <= vld[20];
                            vld[22] <= vld[21];
                            vld[23] <= vld[22];
                            vld[24] <= vld[23];
                            vld[25] <= vld[24];
                            vld[26] <= vld[25];
                            vld[27] <= vld[26];
                            vld[28] <= vld[27];
                            vld[29] <= vld[28];
                            vld[30] <= vld[29];
                            vld[31] <= vld[30];
                            vld[32] <= vld[31];
                            vld[33] <= vld[32];
                            vld[34] <= vld[33];
                            vld[35] <= vld[34];
                            vld[36] <= vld[35];
                            vld[37] <= vld[36];
                            vld[38] <= vld[37];
                            vld[39] <= vld[38];
                            vld[40] <= vld[39];
                            vld[41] <= vld[40];
                            vld[42] <= vld[41];
                            vld[43] <= vld[42];
                            vld[44] <= vld[43];
                            vld[45] <= vld[44];
                            vld[46] <= vld[45];
                            vld[47] <= vld[46];
                            vld[48] <= vld[47];
                            vld[49] <= vld[48];
                            vld[50] <= vld[49];
                            vld[51] <= vld[50];
                            vld[52] <= vld[51];
                            vld[53] <= vld[52];
                            vld[54] <= vld[53];
                            vld[55] <= vld[54];
                            vld[56] <= vld[55];
                            vld[57] <= vld[56];
                            vld[58] <= vld[57];
                            vld[59] <= vld[58];
                            vld[60] <= vld[59];
                            vld[61] <= vld[60];
                            vld[62] <= vld[61];
                            vld[63] <= vld[62];

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
                            mem[12] <= mem[12];
                            mem[13] <= mem[13];
                            mem[14] <= mem[14];
                            mem[15] <= mem[15];
                            mem[16] <= mem[16];
                            mem[17] <= mem[17];
                            mem[18] <= mem[18];
                            mem[19] <= mem[19];
                            mem[20] <= mem[20];
                            mem[21] <= mem[21];
                            mem[22] <= mem[22];
                            mem[23] <= mem[23];
                            mem[24] <= mem[24];
                            mem[25] <= mem[25];
                            mem[26] <= mem[26];
                            mem[27] <= mem[27];
                            mem[28] <= mem[28];
                            mem[29] <= mem[29];
                            mem[30] <= mem[30];
                            mem[31] <= mem[31];
                            mem[32] <= mem[32];
                            mem[33] <= mem[33];
                            mem[34] <= mem[34];
                            mem[35] <= mem[35];
                            mem[36] <= mem[36];
                            mem[37] <= mem[37];
                            mem[38] <= mem[38];
                            mem[39] <= mem[39];
                            mem[40] <= mem[40];
                            mem[41] <= mem[41];
                            mem[42] <= mem[42];
                            mem[43] <= mem[43];
                            mem[44] <= mem[44];
                            mem[45] <= mem[45];
                            mem[46] <= mem[46];
                            mem[47] <= mem[47];
                            mem[48] <= mem[48];
                            mem[49] <= mem[49];
                            mem[50] <= mem[50];
                            mem[51] <= mem[51];
                            mem[52] <= mem[52];
                            mem[53] <= mem[53];
                            mem[54] <= mem[54];
                            mem[55] <= mem[55];
                            mem[56] <= mem[56];
                            mem[57] <= mem[57];
                            mem[58] <= mem[58];
                            mem[59] <= mem[59];
                            mem[60] <= mem[60];
                            mem[61] <= mem[61];
                            mem[62] <= mem[62];
                            mem[63] <= mem[63];

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
                            vld[12] <= vld[12];
                            vld[13] <= vld[13];
                            vld[14] <= vld[14];
                            vld[15] <= vld[15];
                            vld[16] <= vld[16];
                            vld[17] <= vld[17];
                            vld[18] <= vld[18];
                            vld[19] <= vld[19];
                            vld[20] <= vld[20];
                            vld[21] <= vld[21];
                            vld[22] <= vld[22];
                            vld[23] <= vld[23];
                            vld[24] <= vld[24];
                            vld[25] <= vld[25];
                            vld[26] <= vld[26];
                            vld[27] <= vld[27];
                            vld[28] <= vld[28];
                            vld[29] <= vld[29];
                            vld[30] <= vld[30];
                            vld[31] <= vld[31];
                            vld[32] <= vld[32];
                            vld[33] <= vld[33];
                            vld[34] <= vld[34];
                            vld[35] <= vld[35];
                            vld[36] <= vld[36];
                            vld[37] <= vld[37];
                            vld[38] <= vld[38];
                            vld[39] <= vld[39];
                            vld[40] <= vld[40];
                            vld[41] <= vld[41];
                            vld[42] <= vld[42];
                            vld[43] <= vld[43];
                            vld[44] <= vld[44];
                            vld[45] <= vld[45];
                            vld[46] <= vld[46];
                            vld[47] <= vld[47];
                            vld[48] <= vld[48];
                            vld[49] <= vld[49];
                            vld[50] <= vld[50];
                            vld[51] <= vld[51];
                            vld[52] <= vld[52];
                            vld[53] <= vld[53];
                            vld[54] <= vld[54];
                            vld[55] <= vld[55];
                            vld[56] <= vld[56];
                            vld[57] <= vld[57];
                            vld[58] <= vld[58];
                            vld[59] <= vld[59];
                            vld[60] <= vld[60];
                            vld[61] <= vld[61];
                            vld[62] <= vld[62];
                            vld[63] <= vld[63];

                            //Envio:
                            data_o          <= x_state;
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
                        mem[12] <= mem[12];
                        mem[13] <= mem[13];
                        mem[14] <= mem[14];
                        mem[15] <= mem[15];
                        mem[16] <= mem[16];
                        mem[17] <= mem[17];
                        mem[18] <= mem[18];
                        mem[19] <= mem[19];
                        mem[20] <= mem[20];
                        mem[21] <= mem[21];
                        mem[22] <= mem[22];
                        mem[23] <= mem[23];
                        mem[24] <= mem[24];
                        mem[25] <= mem[25];
                        mem[26] <= mem[26];
                        mem[27] <= mem[27];
                        mem[28] <= mem[28];
                        mem[29] <= mem[29];
                        mem[30] <= mem[30];
                        mem[31] <= mem[31];
                        mem[32] <= mem[32];
                        mem[33] <= mem[33];
                        mem[34] <= mem[34];
                        mem[35] <= mem[35];
                        mem[36] <= mem[36];
                        mem[37] <= mem[37];
                        mem[38] <= mem[38];
                        mem[39] <= mem[39];
                        mem[40] <= mem[40];
                        mem[41] <= mem[41];
                        mem[42] <= mem[42];
                        mem[43] <= mem[43];
                        mem[44] <= mem[44];
                        mem[45] <= mem[45];
                        mem[46] <= mem[46];
                        mem[47] <= mem[47];
                        mem[48] <= mem[48];
                        mem[49] <= mem[49];
                        mem[50] <= mem[50];
                        mem[51] <= mem[51];
                        mem[52] <= mem[52];
                        mem[53] <= mem[53];
                        mem[54] <= mem[54];
                        mem[55] <= mem[55];
                        mem[56] <= mem[56];
                        mem[57] <= mem[57];
                        mem[58] <= mem[58];
                        mem[59] <= mem[59];
                        mem[60] <= mem[60];
                        mem[61] <= mem[61];
                        mem[62] <= mem[62];
                        mem[63] <= mem[63];

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
                        vld[12] <= vld[12];
                        vld[13] <= vld[13];
                        vld[14] <= vld[14];
                        vld[15] <= vld[15];
                        vld[16] <= vld[16];
                        vld[17] <= vld[17];
                        vld[18] <= vld[18];
                        vld[19] <= vld[19];
                        vld[20] <= vld[20];
                        vld[21] <= vld[21];
                        vld[22] <= vld[22];
                        vld[23] <= vld[23];
                        vld[24] <= vld[24];
                        vld[25] <= vld[25];
                        vld[26] <= vld[26];
                        vld[27] <= vld[27];
                        vld[28] <= vld[28];
                        vld[29] <= vld[29];
                        vld[30] <= vld[30];
                        vld[31] <= vld[31];
                        vld[32] <= vld[32];
                        vld[33] <= vld[33];
                        vld[34] <= vld[34];
                        vld[35] <= vld[35];
                        vld[36] <= vld[36];
                        vld[37] <= vld[37];
                        vld[38] <= vld[38];
                        vld[39] <= vld[39];
                        vld[40] <= vld[40];
                        vld[41] <= vld[41];
                        vld[42] <= vld[42];
                        vld[43] <= vld[43];
                        vld[44] <= vld[44];
                        vld[45] <= vld[45];
                        vld[46] <= vld[46];
                        vld[47] <= vld[47];
                        vld[48] <= vld[48];
                        vld[49] <= vld[49];
                        vld[50] <= vld[50];
                        vld[51] <= vld[51];
                        vld[52] <= vld[52];
                        vld[53] <= vld[53];
                        vld[54] <= vld[54];
                        vld[55] <= vld[55];
                        vld[56] <= vld[56];
                        vld[57] <= vld[57];
                        vld[58] <= vld[58];
                        vld[59] <= vld[59];
                        vld[60] <= vld[60];
                        vld[61] <= vld[61];
                        vld[62] <= vld[62];
                        vld[63] <= vld[63];

                        data_o          <= x_state;
                        rqn             <= 1;
                        wr_stb          <= 0;
                    end
            end
    end

endmodule