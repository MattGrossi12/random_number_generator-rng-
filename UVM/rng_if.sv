//============================================================
// rng_if.sv
// Interface do DUT: rng_top
// - Centraliza sinais para driver/monitor
// - Clocking blocks evitam condição de corrida (drive/amostragem)
//============================================================

interface rng_if #(
  parameter int WIDTH = 3
)(
  input logic clk_i
);

  // Entradas do DUT
  logic rst_i;
  logic req_num_i;
  logic wr_i;

  // Saída do DUT
  logic [WIDTH-1:0] num_to_send_o;

  // -----------------------------
  // Clocking blocks
  // -----------------------------
  // Driver: dirige apenas entradas de estímulo na borda do clock (nonblocking)
  clocking drv_cb @(posedge clk_i);
    input  rst_i;
    output req_num_i;
    output wr_i;
    input  num_to_send_o;
  endclocking

  // Monitor: amostra tudo na mesma borda (sem drive)
  clocking mon_cb @(posedge clk_i);
    input rst_i;
    input req_num_i;
    input wr_i;
    input num_to_send_o;
  endclocking

  // Modports opcionais (úteis quando você quiser tipar melhor)
  modport TB  (clocking drv_cb, clocking mon_cb);
  modport DUT (
    input  clk_i,
    input  rst_i,
    input  req_num_i,
    input  wr_i,
    output num_to_send_o
  );

endinterface
