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

    localparam DEPTH         = 72;                       //Profundidade
    localparam T_DEPTH       = (DEPTH-1);                //Profundidade real
    localparam WIDTH         = 8;                        //Largura
    localparam T_WIDTH       = (WIDTH-1);                //Largura "real" para uso vetorial
    localparam SEED_TOT_NUMB = 64;                       //Total de números das seeds agrupados
    localparam T_SEED_T_NUMB = (SEED_TOT_NUMB-1);        //Total de números das seeds agrupados
    localparam COUNT_WIDTH   = $clog2(SEED_TOT_NUMB);    //Largura do contador de ciclos
    localparam T_COUNT_WID   = (COUNT_WIDTH-1);          //Largura "real" para uso vetorial

	// Inputs
	logic clk_i;
	logic write;
	logic rst_i;
	logic [T_WIDTH:0] data_in;

	//Variável de sustentação do looping
	integer i;

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

	function [T_WIDTH:0] vlr;
		input [T_WIDTH:0] value;
		begin
			data_in = value;
		end
	endfunction

	task reset;
		rst_i = 0;
		#10;
		rst_i = 1;
		#10;
	endtask 

	task wr;
		#50;
		write = 1'b1;
		#50;
		write = 1'b0;
	endtask 

	initial 
        begin
			//-------------------------------------------------
			reset();
			//-------------------------------------------------
			for (i = 0; i < SEED_TOT_NUMB; i = i + 1)
				begin
					vlr(i);
					wr();
				end
			//-------------------------------------------------
			#500;
			$finish;
        end
      
    initial 
        begin: Wavedump
                $dumpfile("../waveforms/fifo.vcd");
            $dumpvars(0, uut);
        end

endmodule

