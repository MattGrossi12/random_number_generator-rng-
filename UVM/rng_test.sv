//============================================================
// rng_test.sv
// Test genérico
// - Instancia env
// - Inicia uma sequência placeholder (vazia por default)
//============================================================

class rng_test extends uvm_test;
  `uvm_component_utils(rng_test)

  rng_env env;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env = rng_env::type_id::create("env", this);
  endfunction

  task run_phase(uvm_phase phase);
    rng_base_sequence seq;

    phase.raise_objection(this);

    // Sequência default (vazia). Troque para rng_smoke_sequence ou a sua.
    seq = rng_base_sequence::type_id::create("seq");

    if (env.agent.is_active == UVM_ACTIVE) begin
      seq.start(env.agent.sequencer);
    end

    // Espera alguns ciclos para facilitar depuração inicial (opcional)
    // Ajuste/remova conforme seu fluxo.
    repeat (20) @(posedge env.agent.monitor.vif.clk_i);

    phase.drop_objection(this);
  endtask

endclass
