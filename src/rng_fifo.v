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
    input write,
    input rst_i,
    input [T_WIDTH:0] data_in,

    //data_out:
    output reg [T_WIDTH:0] data_out_00,
    output reg [T_WIDTH:0] data_out_01,
    output reg [T_WIDTH:0] data_out_02,
    output reg [T_WIDTH:0] data_out_03,
    output reg [T_WIDTH:0] data_out_04,
    output reg [T_WIDTH:0] data_out_05,
    output reg [T_WIDTH:0] data_out_06,
    output reg [T_WIDTH:0] data_out_07,
    output reg [T_WIDTH:0] data_out_08,
    output reg [T_WIDTH:0] data_out_09,
    output reg [T_WIDTH:0] data_out_10,
    output reg [T_WIDTH:0] data_out_11,
    output reg [T_WIDTH:0] data_out_12,
    output reg [T_WIDTH:0] data_out_13,
    output reg [T_WIDTH:0] data_out_14,
    output reg [T_WIDTH:0] data_out_15,
    output reg [T_WIDTH:0] data_out_16,
    output reg [T_WIDTH:0] data_out_17,
    output reg [T_WIDTH:0] data_out_18,
    output reg [T_WIDTH:0] data_out_19,
    output reg [T_WIDTH:0] data_out_20,
    output reg [T_WIDTH:0] data_out_21,
    output reg [T_WIDTH:0] data_out_22,
    output reg [T_WIDTH:0] data_out_23,
    output reg [T_WIDTH:0] data_out_24,
    output reg [T_WIDTH:0] data_out_25,
    output reg [T_WIDTH:0] data_out_26,
    output reg [T_WIDTH:0] data_out_27,
    output reg [T_WIDTH:0] data_out_28,
    output reg [T_WIDTH:0] data_out_29,
    output reg [T_WIDTH:0] data_out_30,
    output reg [T_WIDTH:0] data_out_31,
    output reg [T_WIDTH:0] data_out_32,
    output reg [T_WIDTH:0] data_out_33,
    output reg [T_WIDTH:0] data_out_34,
    output reg [T_WIDTH:0] data_out_35,
    output reg [T_WIDTH:0] data_out_36,
    output reg [T_WIDTH:0] data_out_37,
    output reg [T_WIDTH:0] data_out_38,
    output reg [T_WIDTH:0] data_out_39,
    output reg [T_WIDTH:0] data_out_40,
    output reg [T_WIDTH:0] data_out_41,
    output reg [T_WIDTH:0] data_out_42,
    output reg [T_WIDTH:0] data_out_43,
    output reg [T_WIDTH:0] data_out_44,
    output reg [T_WIDTH:0] data_out_45,
    output reg [T_WIDTH:0] data_out_46,
    output reg [T_WIDTH:0] data_out_47,
    output reg [T_WIDTH:0] data_out_48,
    output reg [T_WIDTH:0] data_out_49,
    output reg [T_WIDTH:0] data_out_50,
    output reg [T_WIDTH:0] data_out_51,
    output reg [T_WIDTH:0] data_out_52,
    output reg [T_WIDTH:0] data_out_53,
    output reg [T_WIDTH:0] data_out_54,
    output reg [T_WIDTH:0] data_out_55,
    output reg [T_WIDTH:0] data_out_56,
    output reg [T_WIDTH:0] data_out_57,
    output reg [T_WIDTH:0] data_out_58,
    output reg [T_WIDTH:0] data_out_59,
    output reg [T_WIDTH:0] data_out_60,
    output reg [T_WIDTH:0] data_out_61,
    output reg [T_WIDTH:0] data_out_62,
    output reg [T_WIDTH:0] data_out_63

);
localparam write_data = 1;
localparam await = 0;

reg next_state;

//data_pack:
reg [T_WIDTH:0] data_stack [0:T_DEPTH];

//Contador indo de 0 a 63
reg [T_COUNT_WID:0] cycle_count;

//Variáveis temporárias criada para gerar efeito de detecção de borda
reg  write_d;
wire write_pulse;

//Isso permite o posedge detection em um if:
assign write_pulse = write & ~write_d;

//Variável de sustentação do looping
integer i;

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

        data_out_00 <= 8'b0;
        data_out_01 <= 8'b0;
        data_out_02 <= 8'b0;
        data_out_03 <= 8'b0;
        data_out_04 <= 8'b0;
        data_out_05 <= 8'b0;
        data_out_06 <= 8'b0;
        data_out_07 <= 8'b0;
        data_out_08 <= 8'b0;
        data_out_09 <= 8'b0;
        data_out_10 <= 8'b0;
        data_out_11 <= 8'b0;
        data_out_12 <= 8'b0;
        data_out_13 <= 8'b0;
        data_out_14 <= 8'b0;
        data_out_15 <= 8'b0;
        data_out_16 <= 8'b0;
        data_out_17 <= 8'b0;
        data_out_18 <= 8'b0;
        data_out_19 <= 8'b0;
        data_out_20 <= 8'b0;
        data_out_21 <= 8'b0;
        data_out_22 <= 8'b0;
        data_out_23 <= 8'b0;
        data_out_24 <= 8'b0;
        data_out_25 <= 8'b0;
        data_out_26 <= 8'b0;
        data_out_27 <= 8'b0;
        data_out_28 <= 8'b0;
        data_out_29 <= 8'b0;
        data_out_30 <= 8'b0;
        data_out_31 <= 8'b0;
        data_out_32 <= 8'b0;
        data_out_33 <= 8'b0;
        data_out_34 <= 8'b0;
        data_out_35 <= 8'b0;
        data_out_36 <= 8'b0;
        data_out_37 <= 8'b0;
        data_out_38 <= 8'b0;
        data_out_39 <= 8'b0;
        data_out_40 <= 8'b0;
        data_out_41 <= 8'b0;
        data_out_42 <= 8'b0;
        data_out_43 <= 8'b0;
        data_out_44 <= 8'b0;
        data_out_45 <= 8'b0;
        data_out_46 <= 8'b0;
        data_out_47 <= 8'b0;
        data_out_48 <= 8'b0;
        data_out_49 <= 8'b0;
        data_out_50 <= 8'b0;
        data_out_51 <= 8'b0;
        data_out_52 <= 8'b0;
        data_out_53 <= 8'b0;
        data_out_54 <= 8'b0;
        data_out_55 <= 8'b0;
        data_out_56 <= 8'b0;
        data_out_57 <= 8'b0;
        data_out_58 <= 8'b0;
        data_out_59 <= 8'b0;
        data_out_60 <= 8'b0;
        data_out_61 <= 8'b0;
        data_out_62 <= 8'b0;
        data_out_63 <= 8'b0;
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

            data_out_00 <= data_in;
            data_out_01 <= data_stack[0];
            data_out_02 <= data_stack[1];
            data_out_03 <= data_stack[2];
            data_out_04 <= data_stack[3];
            data_out_05 <= data_stack[4];
            data_out_06 <= data_stack[5];
            data_out_07 <= data_stack[6];
            data_out_08 <= data_stack[7];
            data_out_09 <= data_stack[8];
            data_out_10 <= data_stack[9];
            data_out_11 <= data_stack[10];
            data_out_12 <= data_stack[11];
            data_out_13 <= data_stack[12];
            data_out_14 <= data_stack[13];
            data_out_15 <= data_stack[14];
            data_out_16 <= data_stack[15];
            data_out_17 <= data_stack[16];
            data_out_18 <= data_stack[17];
            data_out_19 <= data_stack[18];
            data_out_20 <= data_stack[19];
            data_out_21 <= data_stack[20];
            data_out_22 <= data_stack[21];
            data_out_23 <= data_stack[22];
            data_out_24 <= data_stack[23];
            data_out_25 <= data_stack[24];
            data_out_26 <= data_stack[25];
            data_out_27 <= data_stack[26];
            data_out_28 <= data_stack[27];
            data_out_29 <= data_stack[28];
            data_out_30 <= data_stack[29];
            data_out_31 <= data_stack[30];
            data_out_32 <= data_stack[31];
            data_out_33 <= data_stack[32];
            data_out_34 <= data_stack[33];
            data_out_35 <= data_stack[34];
            data_out_36 <= data_stack[35];
            data_out_37 <= data_stack[36];
            data_out_38 <= data_stack[37];
            data_out_39 <= data_stack[38];
            data_out_40 <= data_stack[39];
            data_out_41 <= data_stack[40];
            data_out_42 <= data_stack[41];
            data_out_43 <= data_stack[42];
            data_out_44 <= data_stack[43];
            data_out_45 <= data_stack[44];
            data_out_46 <= data_stack[45];
            data_out_47 <= data_stack[46];
            data_out_48 <= data_stack[47];
            data_out_49 <= data_stack[48];
            data_out_50 <= data_stack[49];
            data_out_51 <= data_stack[50];
            data_out_52 <= data_stack[51];
            data_out_53 <= data_stack[52];
            data_out_54 <= data_stack[53];
            data_out_55 <= data_stack[54];
            data_out_56 <= data_stack[55];
            data_out_57 <= data_stack[56];
            data_out_58 <= data_stack[57];
            data_out_59 <= data_stack[58];
            data_out_60 <= data_stack[59];
            data_out_61 <= data_stack[60];
            data_out_62 <= data_stack[61];
            data_out_63 <= data_stack[62];
        end
        else
        begin
            data_stack[i] <= data_stack[i];
        end
end

endmodule