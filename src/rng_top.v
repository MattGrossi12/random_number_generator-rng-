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
    input start,
    input rst_i,
    input req_num,
    output reg [7:0] num_to_send_o
);

    wire [7:0] num_seed_1;
    wire [7:0] num_seed_2;
    wire [7:0] num_seed_3;
    wire [7:0] num_seed_4;

    reg [7:0] next_num;
    
    wire state_w;
    wire [1:0] seed_w;

    rng_control_path srcp
                                    (
                                        .clk_i              (clk_i),
                                        .rst_i              (rst_i),
                                        .req_num            (req_num),
                                        .state_o            (state_w)
                                    );

    rng_data_path srdp
                                    (
                                        .clk_i                  (clk_i),
                                        .rst_i                  (rst_i),
                                        .req_num                (state_w),
                                        .seed_sel_i             (seed_w),
                                        .num_to_send_o          (num_to_send_o)
                                    );

    rng_selector seed_s(
                            .clk_i      (clk_i),
                            .start      (start),
                            .rst_i      (rst_i),
                            .seed_sel_o (seed_w)
                        );

endmodule