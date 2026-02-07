`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:35:42 01/31/2026
// Design Name:   seed_random_1_data_path_counter
// Module Name:   /home/matheus/ISE_projects/seed_random_1/tb1.v
// Project Name:  seed_random_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: seed_random_1_data_path_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench_data_path_counter;

	// Inputs
	reg clk_i;
	reg rst_i;
	reg req_num;

	// Outputs
	wire [7:0] next_num_o;

	// Instantiate the Unit Under Test (UUT)
	rng_data_path_counter uut (
		.clk_i(clk_i), 
		.rst_i(rst_i), 
		.req_num(req_num), 
		.next_num_o(next_num_o)
	);

    initial 
        begin: Clock_generator
          clk_i = 0;
          forever #5 clk_i = ~clk_i;
        end

	initial 
        begin
            // Initialize Inputs
			rst_i = 0; req_num = 0;
			#10;
			rst_i = 1;
			#10;
            req_num = 1;
			#150;
            req_num = 0;
			#150;
            req_num = 1;
			#150;
			rst_i = 0;
			#10;
			rst_i = 1;
			#10;
            req_num = 1;
			#150;
            req_num = 0;
			#150;
            req_num = 1;
			#150;
			$finish;
        end
      
    initial 
        begin: Wavedump
            $dumpfile("../waveforms/data_path_counter.vcd");
            $dumpvars(0);
        end

endmodule

