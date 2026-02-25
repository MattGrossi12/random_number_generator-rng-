//============================================================
// tb_rng.sv
// Top-level TB (instancia interface, DUT e dispara UVM)
//============================================================

module tb_rng;
  import uvm_pkg::*;
  `include "uvm_macros.svh"

  // ---- Includes das classes UVM ----
  `include "rng_seq_item.sv"
  `include "rng_sequencer.sv"
  `include "rng_sequence.sv"
  `include "rng_driver.sv"
  `include "rng_monitor.sv"
  `include "rng_agent.sv"
  `include "rng_scoreboard.sv"
  `include "rng_env.sv"
  `include "rng_test.sv"

  // ---- Clock/Reset ----
  logic clk;
  always #5 clk = ~clk;


  localparam int WIDTH = 3;
  rng_if #(WIDTH) rif(.clk_i(clk));

  // ---- DUT ----
  rng_top #(
            .WIDTH(WIDTH)
            ) dut (
            .clk_i         (rif.clk_i),
            .rst_i         (rif.rst_i),
            .req_num_i     (rif.req_num_i),
            .wr_i          (rif.wr_i),
            .num_to_send_o (rif.num_to_send_o)
          );

  initial 
      begin: Clock_generator
        clk_i = 0;
        forever #5 clk_i = ~clk_i;
      end

	task reset;
			rif.rst_i = 0;
      rif.req_num_i = 1'b0;
			#10;
			rif.rst_i = 1;
			#10;
	endtask 

  // Dump
  initial begin
    $dumpfile("dump_rng.vcd");
    $dumpvars(0, tb_rng);

    // Configura VIF para todos os componentes
    uvm_config_db #(virtual rng_if)::set(null, "*", "vif", rif);

    // Opcional: desabilitar scoreboard stub
    // uvm_config_db #(bit)::set(null, "*", "has_scoreboard", 1'b0);

    run_test("rng_test");
  end

  // Estimulos:
  initial begin
    clk = 1'b0;

    // Reset ativo em '1'
    rif.rst_i     = 1'b1;
    rif.req_num_i = 1'b0;
    rif.wr_i      = 1'b0;

    repeat (5) @(posedge clk);
    rif.rst_i = 1'b0;
  end

endmodule
