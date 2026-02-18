//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:19:00 02/01/2026 
// Design Name: 
// Module Name:    rng_selector
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

module rng_selector
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
    output reg [1:0] seed_sel_o
);

reg [1:0] seed_s;

    localparam seed_1 = 2'b00;
    localparam seed_2 = 2'b01;
    localparam seed_3 = 2'b10;
    localparam seed_4 = 2'b11;

always@(posedge clk_i or negedge rst_i)
    begin
        if(!rst_i)
            begin
                seed_s <= 0;
            end
        else
            begin
                seed_s <= seed_s + 1'b1;
            end
    end

always@(*)
    begin
        seed_sel_o = seed_s;
    end
endmodule