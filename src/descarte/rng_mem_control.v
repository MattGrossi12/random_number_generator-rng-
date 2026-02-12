//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:46:48 01/27/2026 
// Design Name: 
// Module Name:    rng_fifo 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module rng_fifo #(
    parameter DEPTH         = 72,                       //Profundidade
    parameter T_DEPTH       = (DEPTH-1),                //Profundidade real
    parameter WIDTH         = 8,                        //Largura
    parameter T_WIDTH       = (WIDTH-1),                //Largura "real" para uso vetorial
    parameter SEED_TOT_NUMB = 64,                       //Total de números das seeds agrupados
    parameter COUNT_WIDTH   = $clog2(SEED_TOT_NUMB),    //Largura do contador de ciclos
    parameter T_COUNT_WID   = (COUNT_WIDTH-1)           //Largura "real" para uso vetorial
    )(
    input clk_i,
    input rst_i,
    input [T_WIDTH:0] data_in,

);
localparam write_data = 1;
localparam decline = 0;

reg next_state;
reg situation_state;

//data_pack:
reg [T_WIDTH:0] data_stack [0:T_DEPTH];

//Contador indo de 0 a 63
reg [T_COUNT_WID:0] cycle_count;

//Variáveis temporárias criada para gerar efeito de detecção de borda
reg  write_d;
wire write_pulse;
wire write;

//Isso permite o posedge detection em um if:
assign write_pulse = write & ~write_d;

//Variável de sustentação do looping
integer i;

//Dados de números já entregues
wire [7:0] pos_00;
wire [7:0] pos_01;
wire [7:0] pos_02;
wire [7:0] pos_03;
wire [7:0] pos_04;
wire [7:0] pos_05;
wire [7:0] pos_06;
wire [7:0] pos_07;
wire [7:0] pos_08;
wire [7:0] pos_09;
wire [7:0] pos_10;
wire [7:0] pos_11;
wire [7:0] pos_12;
wire [7:0] pos_13;
wire [7:0] pos_14;
wire [7:0] pos_15;
wire [7:0] pos_16;
wire [7:0] pos_17;
wire [7:0] pos_18;
wire [7:0] pos_19;
wire [7:0] pos_20;
wire [7:0] pos_21;
wire [7:0] pos_22;
wire [7:0] pos_23;
wire [7:0] pos_24;
wire [7:0] pos_25;
wire [7:0] pos_26;
wire [7:0] pos_27;
wire [7:0] pos_28;
wire [7:0] pos_29;
wire [7:0] pos_30;
wire [7:0] pos_31;
wire [7:0] pos_32;
wire [7:0] pos_33;
wire [7:0] pos_34;
wire [7:0] pos_35;
wire [7:0] pos_36;
wire [7:0] pos_37;
wire [7:0] pos_38;
wire [7:0] pos_39;
wire [7:0] pos_40;
wire [7:0] pos_41;
wire [7:0] pos_42;
wire [7:0] pos_43;
wire [7:0] pos_44;
wire [7:0] pos_45;
wire [7:0] pos_46;
wire [7:0] pos_47;
wire [7:0] pos_48;
wire [7:0] pos_49;
wire [7:0] pos_50;
wire [7:0] pos_51;
wire [7:0] pos_52;
wire [7:0] pos_53;
wire [7:0] pos_54;
wire [7:0] pos_55;
wire [7:0] pos_56;
wire [7:0] pos_57;
wire [7:0] pos_58;
wire [7:0] pos_59;
wire [7:0] pos_60;
wire [7:0] pos_61;
wire [7:0] pos_62;
wire [7:0] pos_63;

//Control Path:
always @(posedge clk_i or negedge rst_i)
begin
    if (!rst_i)
    begin
        write_d     <= 1'b0; 
        cycle_count <= 6'b000000;
        for (i = 0; i < SEED_TOT_NUMB; i = i + 1)
        begin
            data_stack[i] <= 8'b0;
        end

        pos_00 <= 8'b0;
        pos_01 <= 8'b0;
        pos_02 <= 8'b0;
        pos_03 <= 8'b0;
        pos_04 <= 8'b0;
        pos_05 <= 8'b0;
        pos_06 <= 8'b0;
        pos_07 <= 8'b0;
        pos_08 <= 8'b0;
        pos_09 <= 8'b0;
        pos_10 <= 8'b0;
        pos_11 <= 8'b0;
        pos_12 <= 8'b0;
        pos_13 <= 8'b0;
        pos_14 <= 8'b0;
        pos_15 <= 8'b0;
        pos_16 <= 8'b0;
        pos_17 <= 8'b0;
        pos_18 <= 8'b0;
        pos_19 <= 8'b0;
        pos_20 <= 8'b0;
        pos_21 <= 8'b0;
        pos_22 <= 8'b0;
        pos_23 <= 8'b0;
        pos_24 <= 8'b0;
        pos_25 <= 8'b0;
        pos_26 <= 8'b0;
        pos_27 <= 8'b0;
        pos_28 <= 8'b0;
        pos_29 <= 8'b0;
        pos_30 <= 8'b0;
        pos_31 <= 8'b0;
        pos_32 <= 8'b0;
        pos_33 <= 8'b0;
        pos_34 <= 8'b0;
        pos_35 <= 8'b0;
        pos_36 <= 8'b0;
        pos_37 <= 8'b0;
        pos_38 <= 8'b0;
        pos_39 <= 8'b0;
        pos_40 <= 8'b0;
        pos_41 <= 8'b0;
        pos_42 <= 8'b0;
        pos_43 <= 8'b0;
        pos_44 <= 8'b0;
        pos_45 <= 8'b0;
        pos_46 <= 8'b0;
        pos_47 <= 8'b0;
        pos_48 <= 8'b0;
        pos_49 <= 8'b0;
        pos_50 <= 8'b0;
        pos_51 <= 8'b0;
        pos_52 <= 8'b0;
        pos_53 <= 8'b0;
        pos_54 <= 8'b0;
        pos_55 <= 8'b0;
        pos_56 <= 8'b0;
        pos_57 <= 8'b0;
        pos_58 <= 8'b0;
        pos_59 <= 8'b0;
        pos_60 <= 8'b0;
        pos_61 <= 8'b0;
        pos_62 <= 8'b0;
        pos_63 <= 8'b0;
    end
    else
    begin
        write_d <= write; 
        if (write_pulse)
        begin
            next_state <= write_data;
        end
        else
        begin
            next_state <= await;
        end
    end
end

//Data-path:
always @(posedge clk_i)
begin
    if (write_pulse === 1'b1)
        begin

            cycle_count   <= cycle_count + 1'b1;
            data_stack[0] <= data_in;

            for (i = (SEED_TOT_NUMB-1); i > 0; i = i - 1)
            begin
                data_stack[i] <= data_stack[i-1];
            end

            pos_00 <= data_in;
            pos_01 <= data_stack[0];
            pos_02 <= data_stack[1];
            pos_03 <= data_stack[2];
            pos_04 <= data_stack[3];
            pos_05 <= data_stack[4];
            pos_06 <= data_stack[5];
            pos_07 <= data_stack[6];
            pos_08 <= data_stack[7];
            pos_09 <= data_stack[8];
            pos_10 <= data_stack[9];
            pos_11 <= data_stack[10];
            pos_12 <= data_stack[11];
            pos_13 <= data_stack[12];
            pos_14 <= data_stack[13];
            pos_15 <= data_stack[14];
            pos_16 <= data_stack[15];
            pos_17 <= data_stack[16];
            pos_18 <= data_stack[17];
            pos_19 <= data_stack[18];
            pos_20 <= data_stack[19];
            pos_21 <= data_stack[20];
            pos_22 <= data_stack[21];
            pos_23 <= data_stack[22];
            pos_24 <= data_stack[23];
            pos_25 <= data_stack[24];
            pos_26 <= data_stack[25];
            pos_27 <= data_stack[26];
            pos_28 <= data_stack[27];
            pos_29 <= data_stack[28];
            pos_30 <= data_stack[29];
            pos_31 <= data_stack[30];
            pos_32 <= data_stack[31];
            pos_33 <= data_stack[32];
            pos_34 <= data_stack[33];
            pos_35 <= data_stack[34];
            pos_36 <= data_stack[35];
            pos_37 <= data_stack[36];
            pos_38 <= data_stack[37];
            pos_39 <= data_stack[38];
            pos_40 <= data_stack[39];
            pos_41 <= data_stack[40];
            pos_42 <= data_stack[41];
            pos_43 <= data_stack[42];
            pos_44 <= data_stack[43];
            pos_45 <= data_stack[44];
            pos_46 <= data_stack[45];
            pos_47 <= data_stack[46];
            pos_48 <= data_stack[47];
            pos_49 <= data_stack[48];
            pos_50 <= data_stack[49];
            pos_51 <= data_stack[50];
            pos_52 <= data_stack[51];
            pos_53 <= data_stack[52];
            pos_54 <= data_stack[53];
            pos_55 <= data_stack[54];
            pos_56 <= data_stack[55];
            pos_57 <= data_stack[56];
            pos_58 <= data_stack[57];
            pos_59 <= data_stack[58];
            pos_60 <= data_stack[59];
            pos_61 <= data_stack[60];
            pos_62 <= data_stack[61];
            pos_63 <= data_stack[62];
        end
        else
        begin
            data_stack[i] <= data_stack[i];
        end
end

always @(posedge clk_i)
begin
    case (num_i)
        pos_00, pos_01, pos_02, pos_03, pos_04, pos_05, pos_06, pos_07,
        pos_08, pos_09, pos_10, pos_11, pos_12, pos_13, pos_14, pos_15,
        pos_16, pos_17, pos_18, pos_19, pos_20, pos_21, pos_22, pos_23,
        pos_24, pos_25, pos_26, pos_27, pos_28, pos_29, pos_30, pos_31,
        pos_32, pos_33, pos_34, pos_35, pos_36, pos_37, pos_38, pos_39,
        pos_40, pos_41, pos_42, pos_43, pos_44, pos_45, pos_46, pos_47,
        pos_48, pos_49, pos_50, pos_51, pos_52, pos_53, pos_54, pos_55,
        pos_56, pos_57, pos_58, pos_59, pos_60, pos_61, pos_62, pos_63:
        situation_state <= decline;
    default:
        situation_state <= write_data;
    endcase
end

endmodule