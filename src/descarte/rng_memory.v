//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:46:48 01/27/2026 
// Design Name: 
// Module Name:    rng_memory
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module rng_memory #(
    parameter WIDTH         = 8,
    parameter T_WIDTH       = (WIDTH-1),
    parameter SEED_TOT_NUMB = 64,                      // 64 valores na memória
    parameter COUNT_WIDTH   = $clog2(SEED_TOT_NUMB+1)   // 0..64
)(
    input  clk_i,
    input  rst_i,
    input  [T_WIDTH:0] num_i,
    output reg [T_WIDTH:0] num_o,
    output reg req_num_again
);

reg [T_WIDTH:0] data_stack [0:SEED_TOT_NUMB-1];
reg [COUNT_WIDTH-1:0] cycle_count; // quantos valores válidos já guardados (0..64)

integer i;
reg hit;

always @(posedge clk_i or negedge rst_i)
begin
    if (!rst_i)
    begin
        num_o         <= {WIDTH{1'b0}};
        req_num_again <= 1'b0;
        cycle_count   <= {COUNT_WIDTH{1'b0}};

        for (i = 0; i < SEED_TOT_NUMB; i = i + 1)
            data_stack[i] <= {WIDTH{1'b0}};
    end
    else
    begin
        // default: pulso só quando detectar duplicata
        req_num_again <= 1'b0;

        // verifica duplicata apenas nas posições válidas (0 .. cycle_count-1)
        hit = 1'b0;
        for (i = 0; i < cycle_count; i = i + 1)
        begin
            if (num_i == data_stack[i])
                hit = 1'b1;
        end

        if (hit)
        begin
            // duplicado -> pede novo valor por 1 clock
            req_num_again <= 1'b1;
            // num_o permanece com o último aceito
        end
        else
        begin
            // novo -> aceita
            num_o <= num_i;

            // shift (word shift) para abrir espaço no topo
            for (i = SEED_TOT_NUMB-1; i > 0; i = i - 1)
                data_stack[i] <= data_stack[i-1];

            // grava no topo
            data_stack[0] <= num_i;

            // incrementa quantos válidos existem, até saturar em 64
            if (cycle_count < SEED_TOT_NUMB)
                cycle_count <= cycle_count + 1'b1;
        end
    end
end

endmodule
