//============================================================
// rng_env.sv
//============================================================
class rng_env extends uvm_env;
  `uvm_component_utils(rng_env)

  rng_agent      agent;
  rng_scoreboard scb;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    agent = rng_agent     ::type_id::create("agent", this);
    scb   = rng_scoreboard::type_id::create("scb",   this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    agent.monitor.ap.connect(scb.imp);
  endfunction
endclass
