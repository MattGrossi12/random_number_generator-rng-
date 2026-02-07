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

module rng_data_path(
    input clk_i,
    input rst_i,
    input req_num,
    input [1:0] seed_sel_i,
    output [7:0] num_to_send_o
);

//States:
localparam IDLE = 0;
localparam SEND = 1;

`include "rng_data_base.vh"

    wire [7:0] num_to_send;

    rng_data_path_counter inst(
                                    .clk_i(clk_i),
                                    .rst_i(rst_i),
                                    .req_num(req_num),
                                    .next_num_o(num_to_send)
                                );

reg [7:0] next_num;

localparam seed1_now = 2'b00;
localparam seed2_now = 2'b01;
localparam seed3_now = 2'b10;
localparam seed4_now = 2'b11;

//Data-Path:
function [7:0] num_selector;
    input [7:0] num;
    begin
        case (seed_sel_i)

            // ======================================================
            // SEED 1
            // ======================================================
            seed1_now: begin
                case (num)
                    8'd1:  num_selector = position_s1_01;
                    8'd2:  num_selector = position_s1_02;
                    8'd3:  num_selector = position_s1_03;
                    8'd4:  num_selector = position_s1_04;
                    8'd5:  num_selector = position_s1_05;
                    8'd6:  num_selector = position_s1_06;
                    8'd7:  num_selector = position_s1_07;
                    8'd8:  num_selector = position_s1_08;
                    8'd9:  num_selector = position_s1_09;
                    8'd10: num_selector = position_s1_10;
                    8'd11: num_selector = position_s1_11;
                    8'd12: num_selector = position_s1_12;
                    8'd13: num_selector = position_s1_13;
                    8'd14: num_selector = position_s1_14;
                    8'd15: num_selector = position_s1_15;
                    8'd16: num_selector = position_s1_16;
                    default: num_selector = 8'h00;
                endcase
            end

            // ======================================================
            // SEED 2
            // ======================================================
            seed2_now: begin
                case (num)
                    8'd1:  num_selector = position_s2_01;
                    8'd2:  num_selector = position_s2_02;
                    8'd3:  num_selector = position_s2_03;
                    8'd4:  num_selector = position_s2_04;
                    8'd5:  num_selector = position_s2_05;
                    8'd6:  num_selector = position_s2_06;
                    8'd7:  num_selector = position_s2_07;
                    8'd8:  num_selector = position_s2_08;
                    8'd9:  num_selector = position_s2_09;
                    8'd10: num_selector = position_s2_10;
                    8'd11: num_selector = position_s2_11;
                    8'd12: num_selector = position_s2_12;
                    8'd13: num_selector = position_s2_13;
                    8'd14: num_selector = position_s2_14;
                    8'd15: num_selector = position_s2_15;
                    8'd16: num_selector = position_s2_16;
                    default: num_selector = 8'h00;
                endcase
            end

            // ======================================================
            // SEED 3
            // ======================================================
            seed3_now: begin
                case (num)
                    8'd1:  num_selector = position_s3_01;
                    8'd2:  num_selector = position_s3_02;
                    8'd3:  num_selector = position_s3_03;
                    8'd4:  num_selector = position_s3_04;
                    8'd5:  num_selector = position_s3_05;
                    8'd6:  num_selector = position_s3_06;
                    8'd7:  num_selector = position_s3_07;
                    8'd8:  num_selector = position_s3_08;
                    8'd9:  num_selector = position_s3_09;
                    8'd10: num_selector = position_s3_10;
                    8'd11: num_selector = position_s3_11;
                    8'd12: num_selector = position_s3_12;
                    8'd13: num_selector = position_s3_13;
                    8'd14: num_selector = position_s3_14;
                    8'd15: num_selector = position_s3_15;
                    8'd16: num_selector = position_s3_16;
                    default: num_selector = 8'h00;
                endcase
            end

            // ======================================================
            // SEED 4
            // ======================================================
            default: begin
                case (num)
                    8'd1:  num_selector = position_s4_01;
                    8'd2:  num_selector = position_s4_02;
                    8'd3:  num_selector = position_s4_03;
                    8'd4:  num_selector = position_s4_04;
                    8'd5:  num_selector = position_s4_05;
                    8'd6:  num_selector = position_s4_06;
                    8'd7:  num_selector = position_s4_07;
                    8'd8:  num_selector = position_s4_08;
                    8'd9:  num_selector = position_s4_09;
                    8'd10: num_selector = position_s4_10;
                    8'd11: num_selector = position_s4_11;
                    8'd12: num_selector = position_s4_12;
                    8'd13: num_selector = position_s4_13;
                    8'd14: num_selector = position_s4_14;
                    8'd15: num_selector = position_s4_15;
                    8'd16: num_selector = position_s4_16;
                    default: num_selector = 8'h00;
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
        if(req_num)
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