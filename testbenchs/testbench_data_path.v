    `timescale 1ns / 1ps

    ////////////////////////////////////////////////////////////////////////////////
    // Company: 
    // Engineer:
    //
    // Create Date:   09:33:55 01/31/2026
    // Design Name:   seed_random_1_data_path
    // Module Name:   /home/matheus/ISE_projects/seed_random_1/tb.v
    // Project Name:  seed_random_1
    // Target Device:  
    // Tool versions:  
    // Description: 
    //
    // Verilog Test Fixture created by ISE for module: seed_random_1_data_path
    //
    // Dependencies:
    // 
    // Revision:
    // Revision 0.01 - File Created
    // Additional Comments:
    // 
    ////////////////////////////////////////////////////////////////////////////////

    module testbench_data_path;

        // Inputs
        reg clk_i;
        reg rst_i;
        reg req_num;
        reg [1:0] seed_sel_i;

        // Outputs
        wire [7:0] num_to_send_o;

        // Instantiate the Unit Under Test (UUT)
        rng_data_path uut (
            .clk_i(clk_i), 
            .rst_i(rst_i), 
            .req_num(req_num), 
            .seed_sel_i(seed_sel_i),
            .num_to_send_o(num_to_send_o)
        );

        initial 
            begin: Clock_generator
            clk_i = 0;
            forever #5 clk_i = ~clk_i;
            end

        task Initial_state;
        begin
            rst_i = 0;
            req_num = 0;
            #10;
            rst_i = 1;
        end
        endtask

        task Increment;
        begin
            req_num = 1;
            #10;
            req_num = 0;
        end
        endtask

        initial 
            begin
                // Initialize Inputs
                Initial_state();
                repeat(30) 
                    begin
                        Increment();
                    end
                $finish;
            end
        
        initial 
            begin: Wavedump
                $dumpfile("../waveforms/data_path.vcd");
                $dumpvars(0);
            end

    endmodule

