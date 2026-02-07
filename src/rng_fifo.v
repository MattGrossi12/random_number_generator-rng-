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

module rng_fifo(
    input clk_i,
    input write,
    input rst_i,
    input [7:0] data_in,

    output reg [7:0] data_out [0:71]

);

//data_pack:
reg [7:0] data_stack [0:71];

//Contador indo de 0 a 63
reg [5:0] cycle_count;

//Variável de sustentação do looping
integer i;

always @(posedge clk_i or negedge rst_i) 
    begin
        if (!rst_i) 
            begin
                cycle_count <= 6'b000000;
                for (i = 0; i < 64; i = i + 1) 
                    begin
                        data_stack[i] <= 8'b00000000;
                    end
            end
            else
            begin
                if(write) 
                    begin
                        cycle_count <= cycle_count + 1'b1;
                        data_stack[0] <= data_in;
                            for (i = 63; i > 0; i = i - 1) 
                                begin
                                    data_stack[i] <= data_stack[i-1];
                                end
                    end
            end
    end

endmodule