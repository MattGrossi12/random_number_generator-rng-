`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:47:53 01/28/2026
// Design Name:   rng_top
// Module Name:   /home/matheus/ISE_projects/rng_top/testbench.v
// Project Name:  rng_top
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: rng_top
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
	reg rst_i;
	reg req_num_i;
    reg wr_i;
	// Outputs
	wire [2:0] num_to_send_o;

	// Instantiate the Unit Under Test (UUT)
	rng_top uut 
				(
					.clk_i			(clk_i),
					.rst_i			(rst_i), 
					.req_num_i		(req_num_i), 
					.wr_i			(wr_i),
					.num_to_send_o	(num_to_send_o)
				);

    initial 
        begin: Clock_generator
          clk_i = 0;
          forever #5 clk_i = ~clk_i;
        end

	task reset;
			rst_i = 0;
			#10;
			rst_i = 1;
			#10;
	endtask 

	task reqn;
			req_num_i = 1;
			#15;
			wr_i = 1;
			#7;
			req_num_i = 0;
			#10;
			wr_i = 0;
			#5000;
	endtask 

	initial 
        begin
            // Initialize Inputs
			//-------------------------------------------------
			wr_i = 0;
			reset();

			//========================================================
			//						Ciclo 1
			
			repeat(100) 
				begin
					reqn();
				end


			#5000;
			$finish;
        end
      
    initial 
        begin: Wavedump
                $dumpfile("../waveforms/top.vcd");
            $dumpvars(0);
        end

endmodule

