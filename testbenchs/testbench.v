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

	localparam d0 = 302;
	localparam d1 = 406;
	localparam d2 = 201;
	localparam d3 = 603;
	localparam d4 = 1010;
	localparam d5 = 309;
	localparam d6 = 105;
	localparam d7 = 707;

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

	task wr_y;
			req_num_i = 1;
			#15;
			wr_i = 1;
			#7;
	endtask

	task wr_n;
			req_num_i = 0;
			#15;
			wr_i = 0;
			#7;
	endtask

	task reqn;
		wr_y();
		wr_n();
	endtask 


	initial 
        begin
            // Initialize Inputs
			//-------------------------------------------------
			wr_i = 0;
			reset();
			#100;
			//-------------------------------------------------
			
			reqn();
			#d0;
			reqn();
			#d1;
			reqn();
			#d2;
			reqn();
			#d3;
			reqn();
			#d4;
			reqn();
			#d5;
			reqn();
			#d6;
			reqn();
			#d7;
			reqn();
			#d0;
			reqn();
			#d1;
			reqn();
			#d2;
			reqn();
			#d3;
			reqn();
			#d4;
			reqn();
			#d5;
			reqn();
			#d6;
			reqn();
			#d7;

			/*
			reqn();
			#d3;
			reqn();
			#d4;
			reqn();
			#d5;
			reqn();
			#d6;
			reqn();
			#d7;
*/
			#50000;
			$finish;
        end
      
    initial 
        begin: Wavedump
                $dumpfile("../waveforms/top.vcd");
            $dumpvars(0);
        end

endmodule

