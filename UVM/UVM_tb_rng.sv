//============================================================
// tb_rng.sv
// Top-level
//============================================================
module tb_rng;
  import uvm_pkg::*;
  //`include "UVM_macros.svh"
  `include "UVM_tb_params.svh"

  // Inclui classes
  `include "UVM_seq_item.sv"
  `include "UVM_sequencer.sv"
  `include "UVM_sequence.sv"
  `include "UVM_driver.sv"
  `include "UVM_monitor.sv"
  `include "UVM_scoreboard.sv"
  `include "UVM_agent.sv"
  `include "UVM_env.sv"
  `include "UVM_test.sv"

  logic clk;

  rng_if #(RNG_WIDTH) rif (.clk_i(clk));

  // Clock gerado a partir de rif.clk_toggle_tu (lido a cada toggle)
  initial begin
    clk = 1'b0;
    forever begin
      #(rif.clk_toggle_tu) clk = ~clk;
    end
  end

  // DUT (deve existir no seu projeto)
  rng_top #(.WIDTH(RNG_WIDTH)) dut (
    .clk_i         (rif.clk_i),
    .rst_i         (rif.rst_i),
    .req_num_i     (rif.req_num_i),
    .wr_i          (rif.wr_i),
    .num_to_send_o (rif.num_to_send_o)
  );

  initial begin
    $dumpfile("dump_rng.vcd");
    $dumpvars(0, tb_rng);

    rif.rst_i      = 1'b1;
    rif.req_num_i  = 1'b0;
    rif.wr_i       = 1'b0;
    rif.clk_toggle_tu = 3;

    $display("[%0t][TB] clk_toggle_tu inicial=%0t TU (periodo=%0t TU)",
             $time, rif.clk_toggle_tu, 2*rif.clk_toggle_tu);

    uvm_config_db #(virtual rng_if)::set(null, "*", "vif", rif);

    run_test("rng_test");
  end
endmodule
