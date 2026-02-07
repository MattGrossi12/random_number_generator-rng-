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

module rng_data_path_counter(
    input clk_i,
    input rst_i,
    input req_num,
    output reg [7:0] next_num_o
);

//States:
localparam IDLE = 0;
localparam SEND = 1;

reg [7:0] num_counter;
reg state;

always@(*)
    begin
        state = req_num;
        next_num_o = num_counter;
    end

//Counter:
always@(posedge clk_i or negedge rst_i)
    begin
        if(!rst_i)
            begin
                num_counter    <= 0;
                next_num_o <= 0;
            end
        else 
        if(state == 1)
            begin 
                if(num_counter == 52) 
                    begin
                        num_counter <= 1'b0;
                    end
                else
                    begin
                        num_counter <= num_counter + 1'b1;
                    end
            end
        else
            begin
                num_counter <= num_counter;
            end
    end

endmodule
