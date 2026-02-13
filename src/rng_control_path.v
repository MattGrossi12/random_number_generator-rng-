//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:20 04/02/2026 
// Design Name: 
// Module Name:    rng_control_path
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

module rng_control_path
#(
    parameter DEPTH         = 72,                       //Profundidade
    parameter T_DEPTH       = (DEPTH-1),                //Profundidade real
    parameter WIDTH         = 3,                        //Largura
    parameter T_WIDTH       = (WIDTH-1),                //Largura "real" para uso vetorial
    parameter SEED_TOT_NUMB = 12,                        //Total de números das seeds agrupados
    parameter SD_T_TOT_NUMB = (SEED_TOT_NUMB - 1),      //Total "real" de números das seeds agrupados
    parameter COUNT_WIDTH   = $clog2(SEED_TOT_NUMB),    //Largura do contador de ciclos
    parameter T_COUNT_WID   = (COUNT_WIDTH-1)           //Largura "real" para uso vetorial
)
(
    input clk_i,
    input rst_i,
    input req_num_i,

    output state_o
);

//States:
localparam IDLE = 0;
localparam SEND = 1;

reg next_state;

always@(posedge clk_i or negedge rst_i)
    begin
        if(!rst_i)
            begin
                next_state <= IDLE;
            end
        else 
        if(req_num_i)
            begin 
                next_state <= SEND;
            end
        else
            begin
                next_state <= IDLE;
            end
    end

assign state_o = next_state;

endmodule