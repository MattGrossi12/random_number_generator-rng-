`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:58:19 02/06/2026
// Design Name:   rng_fifo
// Module Name:   testbench.v
// Project Name:  rng
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: rng_fifo
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench;

	// Inputs
	reg clk_i;
	reg write;
	reg rst_i;
	reg [7:0] data_in;

	// Instantiate the Unit Under Test (UUT)
	rng_fifo uut (
		.clk_i(clk_i), 
		.write(write), 
		.rst_i(rst_i), 
		.data_in(data_in)
	);

    initial 
        begin: Clock_generator
          clk_i = 0;
          forever #5 clk_i = ~clk_i;
        end

	initial 
        begin
			//-----------------------------
            // Initialize Inputs
			rst_i = 0;
			#10;
			rst_i = 1;
			#10;
			//-----------------------------
			data_in = 8'b10101010;
			#25;
			write = 1'b1;
			#10;
			data_in = 8'b11111111;
			#25;
			write = 1'b1;
			#10;
			#10000;

			$finish;
        end
      
    initial 
        begin: Wavedump
                $dumpfile("../waveforms/fifo.vcd");
            $dumpvars(0, uut);
        end

endmodule

