`timescale 1ns / 1ps

module testbench;
    // Inputs
    reg clk_i;
    reg rst_i;
    reg req_num_i;
    reg wr_i;

    // Outputs
    wire [2:0] num_to_send_o;

    // Power pins
    wire VPWR = 1'b1;
    wire VGND = 1'b0;

    // Time params
    localparam d0 = 302;
    localparam d1 = 406;
    localparam d2 = 201;
    localparam d3 = 603;
    localparam d4 = 1010;
    localparam d5 = 309;
    localparam d6 = 105;
    localparam d7 = 707;

    // Instantiate the Unit Under Test (UUT)
    rng_top uut (
        .VPWR          (VPWR),
        .VGND          (VGND),
        .clk_i         (clk_i),
        .rst_i         (rst_i),
        .req_num_i     (req_num_i),
        .wr_i          (wr_i),
        .num_to_send_o (num_to_send_o)
    );

    initial begin : Clock_generator
        clk_i = 0;
        forever #5 clk_i = ~clk_i;
    end

    task reset;
        begin
            wr_i = 0;
            req_num_i = 0;
            rst_i = 0;
            #10;
            rst_i = 1;
            #10;
        end
    endtask

    task wr_y;
        begin
            req_num_i = 1;
            #15;
            wr_i = 1;
            #7;
        end
    endtask

    task wr_n;
        begin
            req_num_i = 0;
            #15;
            wr_i = 0;
            #7;
        end
    endtask

    task reqn;
        begin
            wr_y();
            wr_n();
        end
    endtask

    initial begin
        // Initialize Inputs
        reset();
        #100;

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

        #50000;
        $finish;
    end

    initial begin : Wavedump
        $dumpfile("../waveforms/netlist_simulation_cpa_cvc.vcd");
        $dumpvars(0, testbench);
    end

endmodule