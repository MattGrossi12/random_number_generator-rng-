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
    input  wire       clk_i,
    input  wire       rst_i,
    input  wire       req_num_i,
    output wire [7:0] next_num_o
);

reg [4:0] num_counter;
reg       req_num_i_d;
wire      req_rise;

assign req_rise    = req_num_i & ~req_num_i_d;
assign next_num_o  = num_counter;

always @(posedge clk_i or negedge rst_i) begin
    if (!rst_i) begin
        num_counter <= 8'd0;
        req_num_i_d <= 1'b0;
    end else begin
        req_num_i_d <= req_num_i;

        if (req_rise) begin
            if (num_counter == 4'd15)
                num_counter <= 4'd0;
            else
                num_counter <= num_counter + 8'd1;
        end
    end
end

endmodule

