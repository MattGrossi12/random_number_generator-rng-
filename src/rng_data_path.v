//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:11:06 01/30/2026 
// Design Name: 
// Module Name:    rng_data_path 
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

module rng_data_path
#(
    parameter DEPTH         = 72,                       //Profundidade
    parameter T_DEPTH       = (DEPTH-1),                //Profundidade real
    parameter WIDTH         = 3,                        //Largura
    parameter T_WIDTH       = (WIDTH-1),                //Largura "real" para uso vetorial
    parameter SEED_TOT_NUMB = 32,                        //Total de números das seeds agrupados
    parameter SD_T_TOT_NUMB = (SEED_TOT_NUMB - 1),      //Total "real" de números das seeds agrupados
    //parameter COUNT_WIDTH   = $clog2(SEED_TOT_NUMB),    //Largura do contador de ciclos
    parameter COUNT_WIDTH   = 5,                        //Largura do contador de ciclos
    parameter T_COUNT_WID   = (COUNT_WIDTH-1)           //Largura "real" para uso vetorial
)
(
    input clk_i,
    input rst_i,
    input req_num_i,
    input [1:0] seed_sel_i,
    output [T_WIDTH:0] num_to_send_o
);

//States:
localparam IDLE = 0;
localparam SEND = 1;

`include "rng_data_base.vh"

wire [T_WIDTH:0] num_to_send;

    rng_data_path_counter inst(
                                    .clk_i(clk_i),
                                    .rst_i(rst_i),
                                    .req_num_i(req_num_i),
                                    .next_num_o(num_to_send)
                                );

reg [2:0] next_num;

localparam seed1_now = 2'b00;
localparam seed2_now = 2'b01;
localparam seed3_now = 2'b10;
localparam seed4_now = 2'b11;

//Data-Path:
function [T_WIDTH:0] num_selector;
    input [T_WIDTH:0] num;
    begin
        case (seed_sel_i)

            // ======================================================
            // SEED 1
            // ======================================================
            seed1_now: begin
                case (num)
                    3'd0:  num_selector = position_s1_00;
                    3'd1:  num_selector = position_s1_01;
                    3'd2:  num_selector = position_s1_02;
                    3'd3:  num_selector = position_s1_03;
                    3'd4:  num_selector = position_s1_04;
                    3'd5:  num_selector = position_s1_05;
                    3'd6:  num_selector = position_s1_06;
                    3'd7:  num_selector = position_s1_07;
                    default: num_selector = 0;
                endcase
            end

            // ======================================================
            // SEED 2
            // ======================================================
            seed2_now: begin
                case (num)
                    3'd0:  num_selector = position_s2_00;
                    3'd1:  num_selector = position_s2_01;
                    3'd2:  num_selector = position_s2_02;
                    3'd3:  num_selector = position_s2_03;
                    3'd4:  num_selector = position_s2_04;
                    3'd5:  num_selector = position_s2_05;
                    3'd6:  num_selector = position_s2_06;
                    3'd7:  num_selector = position_s2_07;
                    default: num_selector = 0;
                    //
                endcase
            end

            // ======================================================
            // SEED 3
            // ======================================================
            seed3_now: begin
                case (num)
                    3'd0:  num_selector = position_s3_00;
                    3'd1:  num_selector = position_s3_01;
                    3'd2:  num_selector = position_s3_02;
                    3'd3:  num_selector = position_s3_03;
                    3'd4:  num_selector = position_s3_04;
                    3'd5:  num_selector = position_s3_05;
                    3'd6:  num_selector = position_s3_06;
                    3'd7:  num_selector = position_s3_07;
                    default: num_selector = 0;
                endcase
            end

            // ======================================================
            // SEED 4
            // ======================================================
            default: begin
                case (num)
                    3'd0:  num_selector = position_s4_00;
                    3'd1:  num_selector = position_s4_01;
                    3'd2:  num_selector = position_s4_02;
                    3'd3:  num_selector = position_s4_03;
                    3'd4:  num_selector = position_s4_04;
                    3'd5:  num_selector = position_s4_05;
                    3'd6:  num_selector = position_s4_06;
                    3'd7:  num_selector = position_s4_07;
                    default: num_selector = 0;
                    //default: num_selector = x_state;
                endcase
            end

        endcase
    end
endfunction

always@(posedge clk_i or negedge rst_i)
    begin
        if(!rst_i)
            begin
                next_num <= 0;
            end
        else
        if(req_num_i)
            begin
                next_num <= num_selector(num_to_send);
            end
        else
            begin
                next_num <= next_num;
            end
    end

assign num_to_send_o = next_num;

endmodule