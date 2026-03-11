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
