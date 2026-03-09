//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:11:06 01/30/2026 
// Design Name: 
// Module Name:    rng_data_path_counter
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

module rng_data_path_counter
#(
    parameter DEPTH         = 72,                       //Profundidade
    parameter T_DEPTH       = (DEPTH-1),                //Profundidade real
    parameter WIDTH         = 3,                        //Largura
    parameter T_WIDTH       = (WIDTH-1),                //Largura "real" para uso vetorial
    parameter SEED_TOT_NUMB = 32,                       //Total de números das seeds agrupados
    parameter SD_T_TOT_NUMB = (SEED_TOT_NUMB - 1),      //Total "real" de números das seeds agrupados
    //parameter COUNT_WIDTH   = $clog2(SEED_TOT_NUMB),    //Largura do contador de ciclos
    parameter COUNT_WIDTH   = 5,                        //Largura do contador de ciclos
    parameter T_COUNT_WID   = (COUNT_WIDTH-1)           //Largura "real" para uso vetorial
)
(
    input  wire       clk_i,
    input  wire       rst_i,
    input  wire       req_num_i,
    output wire [T_WIDTH:0] next_num_o
);

reg [T_WIDTH:0] num_counter;

assign next_num_o  = num_counter;

always @(posedge clk_i or negedge rst_i) 
begin
    if(!rst_i) begin
        num_counter <= 3'd0;
    end 
    else 
        if(req_num_i) 
            begin
                if(num_counter == 3'b111)
                    begin   
                        num_counter <= 0;
                    end
                else
                    begin
                        num_counter <= num_counter + 1;
                    end
            end
        else
            begin
                num_counter <= num_counter;
            end
end

endmodule