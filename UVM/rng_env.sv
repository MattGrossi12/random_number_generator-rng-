//============================================================
// rng_env.sv
// Environment genérico
// - Instancia agent + (opcional) scoreboard
//============================================================

/*
O env reúne e organiza todos os componentes de verificação.
Geralmente contém:

Agentes
Scoreboard
Monitores funcionais
Predictors
Conexões entre componentes (TLM)

Funções:
Fornece encapsulamento e modularidade.
Facilita reuso entre blocos, subsistemas e SoCs.
*/

//============================================================
// rng_env.sv (ESQUELETO)
//============================================================

class rng_env extends uvm_env;
  `uvm_component_utils(rng_env)

  rng_agent      agent;
  rng_scoreboard scoreboard;

  // Permite desabilitar scoreboard via config_db, se quiser
  bit has_scoreboard = 1;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    agent = rng_agent::type_id::create("agent", this);

    if (has_scoreboard) begin
      scoreboard = rng_scoreboard::type_id::create("scoreboard", this);
    end
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);

    if (has_scoreboard) begin
      agent.monitor.ap.connect(scoreboard.imp);
    end
  endfunction

endclass
