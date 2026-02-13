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

module rng_top
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
    input start_i,
    input rst_i,
    input req_num_i,
    input wr_i,
    output reg [T_WIDTH:0] num_to_send_o
);
    //--------------------------------
    reg [T_WIDTH:0] next_num;
    //--------------------------------
    wire state_bar;
    wire [1:0] seed_bar;
    //--------------------------------
    wire [T_WIDTH:0] num_i_bar;
    //--------------------------------
    wire req_num_again;

    wire req_num;

    assign req_num = req_num_i | req_num_again;

    rng_control_path                #(
                                        .DEPTH         (DEPTH),
                                        .T_DEPTH       (T_DEPTH),
                                        .WIDTH         (WIDTH),
                                        .T_WIDTH       (T_WIDTH),
                                        .SEED_TOT_NUMB (SEED_TOT_NUMB),
                                        .SD_T_TOT_NUMB (SD_T_TOT_NUMB),
                                        .COUNT_WIDTH   (COUNT_WIDTH),
                                        .T_COUNT_WID   (T_COUNT_WID)
                                    )rng_cp(
                                        .clk_i          (clk_i),
                                        .rst_i          (rst_i),
                                        .req_num_i      (req_num),
                                        .state_o        (state_bar)
                                    );

    rng_data_path                   #(
                                        .DEPTH         (DEPTH),
                                        .T_DEPTH       (T_DEPTH),
                                        .WIDTH         (WIDTH),
                                        .T_WIDTH       (T_WIDTH),
                                        .SEED_TOT_NUMB (SEED_TOT_NUMB),
                                        .SD_T_TOT_NUMB (SD_T_TOT_NUMB),
                                        .COUNT_WIDTH   (COUNT_WIDTH),
                                        .T_COUNT_WID   (T_COUNT_WID)
                                    )rng_dp(
                                        .clk_i          (clk_i),
                                        .rst_i          (rst_i),
                                        .req_num_i      (req_num),
                                        .seed_sel_i     (seed_bar),
                                        .num_to_send_o  (num_i_bar)
                                    );

    rng_selector                    #(
                                        .DEPTH         (DEPTH),
                                        .T_DEPTH       (T_DEPTH),
                                        .WIDTH         (WIDTH),
                                        .T_WIDTH       (T_WIDTH),
                                        .SEED_TOT_NUMB (SEED_TOT_NUMB),
                                        .SD_T_TOT_NUMB (SD_T_TOT_NUMB),
                                        .COUNT_WIDTH   (COUNT_WIDTH),
                                        .T_COUNT_WID   (T_COUNT_WID)
                                    )rng_sel(
                                        .clk_i          (clk_i),
                                        .start_i        (start_i),
                                        .rst_i          (rst_i),
                                        .seed_sel_o     (seed_bar)
                                    );

    rng_hs_dup_detector             #(
                                        .DEPTH         (DEPTH),
                                        .T_DEPTH       (T_DEPTH),
                                        .WIDTH         (WIDTH),
                                        .T_WIDTH       (T_WIDTH),
                                        .SEED_TOT_NUMB (SEED_TOT_NUMB),
                                        .SD_T_TOT_NUMB (SD_T_TOT_NUMB),
                                        .COUNT_WIDTH   (COUNT_WIDTH),
                                        .T_COUNT_WID   (T_COUNT_WID)
                                    )rng_rd(
                                        .clk_i          (clk_i),
                                        .rst_i          (rst_i),
                                        .req_num_i      (req_num),
                                        .data_i         (num_i_bar),            
                                        .wr_i           (wr_i),
                                        .data_o         (num_to_send_o),
                                        .req_new_num_o  (req_num_again)
                                    );

endmodule