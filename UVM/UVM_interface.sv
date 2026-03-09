//============================================================
// rng_if.sv
//============================================================
interface rng_if #(parameter int WIDTH = 3) (input logic clk_i);
  // Reset ativo-baixo
  logic rst_i;

  // Estimulos
  logic req_num_i;
  logic wr_i;

  // Observacao
  logic [WIDTH-1:0] num_to_send_o;

  // Clock toggle interval (TU). Periodo completo = 2*clk_toggle_tu.
  time clk_toggle_tu = 3;
endinterface
