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
        reg req_num_i;
        reg [1:0] seed_sel_i;

        // Outputs
        wire [7:0] num_to_send_o;

        // Instantiate the Unit Under Test (UUT)
        rng_data_path uut 
                            (
                                .clk_i(clk_i), 
                                .rst_i(rst_i), 
                                .req_num_i(req_num_i), 
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
            req_num_i = 0;
            #10;
            rst_i = 1;
        end
        endtask

        task s1;
        begin
            seed_sel_i = 0;
            #10;
        end
        endtask

        task s2;
        begin
            seed_sel_i = 1;
            #10;
        end
        endtask

        task s3;
        begin
            seed_sel_i = 2;
            #10;
        end
        endtask

        task s4;
        begin
            seed_sel_i = 3;
            #10;
        end
        endtask

        task call;
        begin
            s1();
            s2();
            s3();
            s4();
        end
        endtask

        task inc;
        begin
            repeat(40) 
                begin
                    req_num_i = 1;
                    #10;
                    req_num_i = 0;
                    #10;
                    call();
                end
        end
        endtask

        initial 
            begin
                Initial_state();
                inc();
                $finish;
                #500;
            end
        
        initial 
            begin: Wavedump
                $dumpfile("../waveforms/data_path.vcd");
                $dumpvars(0);
            end

    endmodule

