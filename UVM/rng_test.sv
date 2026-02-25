//============================================================
// rng_test.sv
// Test genérico
// - Instancia env
// - Inicia uma sequência placeholder (vazia por default)
//============================================================

//============================================================
// rng_test.sv (ESQUELETO)
//============================================================

class rng_test extends uvm_test;
  `uvm_component_utils(rng_test)

  rng_env          env;
  rng_base_sequence seq; // sequência base vazia

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    env = rng_env::type_id::create("env", this);
  endfunction

  task run_phase(uvm_phase phase);
    super.run_phase(phase);

    phase.raise_objection(this);

    // TODO: configurar e iniciar sequências quando a estratégia de estímulo estiver definida
    // Exemplo futuro:
    // if (env.agent.is_active == UVM_ACTIVE) begin
    //   seq = rng_base_sequence::type_id::create("seq");
    //   seq.num_items = 10;
    //   seq.start(env.agent.sequencer);
    // end

    // Por enquanto, só espera um pouco e termina
    repeat (20) @(posedge env.agent.monitor.vif.clk_i);

    phase.drop_objection(this);
  endtask

endclass