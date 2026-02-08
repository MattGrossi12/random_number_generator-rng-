//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:20 01/28/2026 
// Design Name: 
// Module Name:    seed_random_1 
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

module rng_top(
    input clk_i,
    input start_i,
    input rst_i,
    input req_num_i,
    output reg [7:0] num_to_send_o
);
    //--------------------------------
    reg [7:0] next_num;
    //--------------------------------
    wire state_bar;
    wire [1:0] seed_bar;
    //--------------------------------
    wire [7:0] num_i_bar;
    wire [7:0] num_o_bar;
    //--------------------------------
    wire write;

    rng_control_path rng_cp
                                    (
                                        .clk_i          (clk_i),
                                        .rst_i          (rst_i),
                                        .req_num_i      (req_num_i),
                                        .state_o        (state_bar)
                                    );

    rng_data_path rng_dp
                                    (
                                        .clk_i          (clk_i),
                                        .rst_i          (rst_i),
                                        .req_num_i      (state_bar),
                                        .seed_sel_i     (seed_bar),
                                        .num_to_send_o  (num_i_bar)
                                    );

    rng_selector rng_sel
                                    (
                                        .clk_i          (clk_i),
                                        .start_i        (start_i),
                                        .rst_i          (rst_i),
                                        .seed_sel_o     (seed_bar)
                                    );

    rng_repeat_detector rng_rd
                                    (
                                        .clk_i          (clk_i),
                                        .start_i        (start_i),
                                        .req_num_i      (req_num_i),
                                        .rst_i          (rst_i),
                                        .num_i          (num_i_bar),                         
                                        .num_o          (num_to_send_o),
                                        .write          (write)
                                    );

endmodule