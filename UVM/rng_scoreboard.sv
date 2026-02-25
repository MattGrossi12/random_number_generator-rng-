//============================================================
// rng_scoreboard.sv
// Scoreboard stub (sem verificação)
// - Recebe transações do monitor
// - Conta/loga eventos; você pode inserir checagens depois
//============================================================

//============================================================
// rng_scoreboard.sv (ESQUELETO)
//============================================================

class rng_scoreboard extends uvm_scoreboard;
  `uvm_component_utils(rng_scoreboard)

  uvm_analysis_imp #(rng_seq_item, rng_scoreboard) imp;

  function new(string name, uvm_component parent);
    super.new(name, parent);
    imp = new("imp", this);
  endfunction

  // Callback do analysis_imp: por enquanto, não faz nada
  virtual function void write(rng_seq_item t);
    // TODO: implementar checagens / modelo de referência / contadores
  endfunction

endclass
