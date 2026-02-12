`timescale 1ns/1ps

module testbench;

//Params:
    localparam DEPTH         = 72;                       //Profundidade
    localparam T_DEPTH       = (DEPTH-1);                //Profundidade real
    localparam WIDTH         = 8;                        //Largura
    localparam T_WIDTH       = (WIDTH-1);                //Largura "real" para uso vetorial
    localparam SEED_TOT_NUMB = 64;                       //Total de números das seeds agrupados
    localparam SD_T_TOT_NUMB = (SEED_TOT_NUMB - 1);      //Total "real" de números das seeds agrupados
    localparam COUNT_WIDTH   = $clog2(SEED_TOT_NUMB);    //Largura do contador de ciclos
    localparam T_COUNT_WID   = (COUNT_WIDTH-1);          //Largura "real" para uso vetorial

// ----------------- sinais -----------------
reg clk_i;
reg rst_i;
reg req_num_i;
reg[T_WIDTH:0]data_i;
reg wr_i;

wire [T_WIDTH:0] mem_valid;
wire [T_WIDTH:0] data_o;
wire req_new_num_o;

// ----------------- DUT -----------------
rng_hs_dup_detector dut 
                                    (
                                    .clk_i(clk_i),
                                    .rst_i(rst_i),
                                    .req_num_i(req_num_i),
                                    .wr_i(wr_i),
                                    .data_i(data_i),
                                    .data_o(data_o),
                                    .req_new_num_o(req_new_num_o)
                                    );

// ----------------- referência -----------------
localparam APPROVE = 1'b1;
localparam DECLINE = 1'b0;

// ----------------- estímulos -----------------
    initial 
    begin
        $dumpfile("../waveforms/hs.vcd");
        $dumpvars();
    end

    // clock 100MHz
    initial 
    begin : Clock_generator
        clk_i = 1'b0;
        forever #5 clk_i = ~clk_i;
    end

    task reset;
    begin
        rst_i = 1'b0;
        #10;
        rst_i = 1'b1;
        #10;
    end
    endtask


    task req;
    begin
        req_num_i = 1'b1;
        #10;
        req_num_i = 1'b0;
        #10;
    end
    endtask

    task wr;
    begin
        wr_i = 1;
        #150;
        wr_i = 0;
        #150;
    end
    endtask

	initial 
    begin
        reset();
        wr_i      = 1'b0;
        req_num_i = 1'b0;
    //==================================
        //-------------------------
        req();
        //-------------------------
        data_i = 8'd1;
        //-------------------------
        wr();
        //-------------------------
    //==================================
        //-------------------------
        req();
        //-------------------------
        data_i = 8'd2;
        //-------------------------
        wr();
        //-------------------------
    //==================================
        //-------------------------
        req();
        //-------------------------
        data_i = 8'd3;
        //-------------------------
        wr();
        //-------------------------
    //==================================
        //-------------------------
        req();
        //-------------------------
        data_i = 8'd2;
        //-------------------------
        wr();
        //-------------------------
    //==================================

        //-------------------------
        #500;
		$finish;
	end


endmodule
