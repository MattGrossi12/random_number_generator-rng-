module rng_hs_dup_detector
//handshaking_duplicate_detector        
#(
    parameter DEPTH         = 72,
    parameter T_DEPTH       = (DEPTH-1),
    parameter WIDTH         = 3,
    parameter T_WIDTH       = (WIDTH-1),
    parameter SEED_TOT_NUMB = 8,
    parameter SD_T_TOT_NUMB = (SEED_TOT_NUMB - 1),
    //parameter COUNT_WIDTH   = $clog2(SEED_TOT_NUMB),    //Largura do contador de ciclos
    parameter COUNT_WIDTH   = 5,                          //Largura do contador de ciclos
    parameter T_COUNT_WID   = (COUNT_WIDTH-1)
)(
    input                   clk_i,
    input                   rst_i,
    input                   req_num_i,
    input  [T_WIDTH:0]      data_i,
    input                   wr_i,

    output reg [T_WIDTH:0]  data_o,
    output reg              req_new_num_o
);
//FSM params:

localparam request_new_number = 0;
localparam approve_number     = 1;

//Memory-array:
reg [T_WIDTH:0] ram_0;
reg [T_WIDTH:0] ram_1;
reg [T_WIDTH:0] ram_2;
reg [T_WIDTH:0] ram_3;
reg [T_WIDTH:0] ram_4;
reg [T_WIDTH:0] ram_5;
reg [T_WIDTH:0] ram_6;
reg [T_WIDTH:0] ram_7;

//Ram:
reg [T_WIDTH:0] cache;

//Dup-detectors:
reg decx;
reg dec0;
reg dec1;
reg dec2;
reg dec3;
reg dec4;
reg dec5;
reg dec6;
reg dec7;

//Reqnum-intern:
reg req_num;

//State:
reg next_state;

// Sync + edge detect for wr_i
reg wr_ff1, wr_ff2, wr_ff2_d;
reg wr_pulse;

//Dec-value-gen
always@(*)
begin
    //Verify Bit0
    if (cache == ram_0) 
        begin
            dec0 = 1'b1;
        end
    else    
        begin
            dec0 = 1'b0;
        end
    //---------------------------------------
    //Verify Bit1
    if (cache == ram_1) 
        begin
            dec1 = 1'b1;
        end
    else    
        begin
            dec1 = 1'b0;
        end
    //---------------------------------------
    //Verify Bit2
    if (cache == ram_2) 
        begin
            dec2 = 1'b1;
        end
    else    
        begin
            dec2 = 1'b0;
        end
    //---------------------------------------
    //Verify Bit3
    if (cache == ram_3) 
        begin
            dec3 = 1'b1;
        end
    else    
        begin
            dec3 = 1'b0;
        end
    //---------------------------------------
    //Verify Bit4
    if (cache == ram_4) 
        begin
            dec4 = 1'b1;
        end
    else    
        begin
            dec4 = 1'b0;
        end
    //---------------------------------------
    //Verify Bit5
    if (cache == ram_5) 
        begin
            dec5 = 1'b1;
        end
    else    
        begin
            dec5 = 1'b0;
        end
    //---------------------------------------
    //Verify Bit6
    if (cache == ram_6) 
        begin
            dec6 = 1'b1;
        end
    else    
        begin
            dec6 = 1'b0;
        end
    //---------------------------------------
    //Verify Bit7
    if (cache == ram_7) 
        begin
            dec7 = 1'b1;
        end
    else    
        begin
            dec7 = 1'b0;
        end

    //Dec-comp
    decx = (dec0 || dec1 || dec2 || dec3 || dec4 || dec5 || dec6 || dec7);
end

//Decs comparator:
always@(*)
begin
    if(decx)
        begin
            next_state = request_new_number;
        end
    else
        begin
            next_state = approve_number;
        end
end

//Delay-wr-gen:
always @(posedge clk_i or negedge rst_i) 
begin
    if (!rst_i) 
    begin
        wr_ff1   <= 1'b0;
        wr_ff2   <= 1'b0;
        wr_ff2_d <= 1'b0;
        wr_pulse <= 1'b0;
    end else begin
        wr_ff1   <= wr_i;
        wr_ff2   <= wr_ff1;
        wr_ff2_d <= wr_ff2;

        // pulso de 1 ciclo quando wr_ff2 sobe
        wr_pulse <= (wr_ff2 & ~wr_ff2_d);
        end
end

always@(posedge clk_i or negedge rst_i)
begin
    if(!rst_i)
        begin
            //Clean-cache:
            cache <= 0;
        end
    else
        if(wr_i)
            begin
                cache <= data_i;
            end
        else
            begin
                cache <= cache;
            end
end

//Cache attach:
always@(posedge clk_i or negedge rst_i)
begin
    if(!rst_i)
        begin
            //Clean-ram:
            ram_0 <= 0;
            ram_1 <= 0;
            ram_2 <= 0;
            ram_3 <= 0;
            ram_4 <= 0;
            ram_5 <= 0;
            ram_6 <= 0;
            ram_7 <= 0;

            //Request-new-data
            req_num <= 0;         

            //Data-out:
            data_o <= 0;   
        end
    else
        if((next_state == approve_number) && wr_pulse)
            begin
                //Shif-operation:
                ram_0 <= cache;
                ram_1 <= ram_0;
                ram_2 <= ram_1;
                ram_3 <= ram_2;
                ram_4 <= ram_3;
                ram_5 <= ram_4;
                ram_6 <= ram_5;
                ram_7 <= ram_6;

                //Request-new-data
                req_num <= 0;

                //End-of-cicle:
                data_o <= cache;
            end
        else
            begin
                //keep-values-at-the-same:
                ram_0 <= ram_0;
                ram_1 <= ram_1;
                ram_2 <= ram_2;
                ram_3 <= ram_3;
                ram_4 <= ram_4;
                ram_5 <= ram_5;
                ram_6 <= ram_6;
                ram_7 <= ram_7;

                //Request-new-data
                req_num <= 1;
    
                //End-of-cicle:
                data_o <= data_o;
            end
end

always@(*)
begin
    req_new_num_o = req_num;
end

endmodule