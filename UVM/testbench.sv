//============================================================
// [ORIGEM: UVM_interface.sv]
//============================================================

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

//============================================================
// [ORIGEM: testbench.sv]
//============================================================

// Wrapper simples para compilar a TB

//============================================================
// [ORIGEM: UVM_tb_rng.sv]
//============================================================

//============================================================
// tb_rng.sv
// Top-level
//============================================================
module tb_rng;
  import uvm_pkg::*;
  `include "uvm_macros.svh"
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

  //============================================================
  // [ORIGEM: UVM_test.sv]
  //============================================================

  //============================================================
  // rng_test.sv
  //
  // - reset uma unica vez
  // - dispara a rng_sequence (24 rodadas)
  //============================================================
  class rng_test extends uvm_test;
    `uvm_component_utils(rng_test)

    rng_env       env;
    virtual rng_if vif;

    function new(string name, uvm_component parent);
      super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
      super.build_phase(phase);
      env = rng_env::type_id::create("env", this);
      if (!uvm_config_db#(virtual rng_if)::get(this, "", "vif", vif)) begin
        `uvm_fatal("NOVIF", "vif nao encontrado no test")
      end
    endfunction

    task automatic apply_reset();
      // Reset ativo-baixo
      vif.rst_i     = 1'b0;
      vif.req_num_i = 1'b0;
      vif.wr_i      = 1'b0;

      `uvm_info("RNG_TEST", $sformatf("Reset assert em t=%0t", $time), UVM_LOW)
      #25;
      vif.rst_i = 1'b1;
      `uvm_info("RNG_TEST", $sformatf("Reset deassert em t=%0t", $time), UVM_LOW)
    endtask

    task run_phase(uvm_phase phase);
      rng_sequence seq;

      super.run_phase(phase);
      phase.raise_objection(this);

      // Clock inicial (grupo 1)
      vif.clk_toggle_tu = 3;

      apply_reset();

      seq = rng_sequence::type_id::create("seq");
      seq.start(env.agent.sequencer);

      // Aguarda um pouco para terminar amostragem
      #100;
      phase.drop_objection(this);
    endtask
  endclass

  //============================================================
  // [RETORNO À ORIGEM: UVM_tb_rng.sv]
  //============================================================

  logic clk;

  rng_if #(RNG_WIDTH) rif (.clk_i(clk));

  // Clock gerado a partir de rif.clk_toggle_tu (lido a cada toggle)
  initial begin
    clk = 1'b0;
    forever begin
      #(rif.clk_toggle_tu) clk = ~clk;
    end
  end

  // DUT
  rng_top #(.WIDTH(RNG_WIDTH)) dut (
    .clk_i         (rif.clk_i),
    .rst_i         (rif.rst_i),
    .req_num_i     (rif.req_num_i),
    .wr_i          (rif.wr_i),
    .num_to_send_o (rif.num_to_send_o)
  );

  initial begin
    $dumpfile("../waveforms/UVM.vcd");
    $dumpvars(0, tb_rng);

    rif.rst_i      = 1'b1;
    rif.req_num_i  = 1'b0;
    rif.wr_i       = 1'b0;
    rif.clk_toggle_tu = 3;

    $display("[%0t][TB] clk_toggle_tu inicial=%0t TU (periodo=%0t TU)",
             $time, rif.clk_toggle_tu, 2*rif.clk_toggle_tu);

    uvm_config_db #(virtual rng_if)::set(null, "*", "vif", rif);

    run_test();
  end
endmodule