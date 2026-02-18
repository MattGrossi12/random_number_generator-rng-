//============================================================
// rng_scoreboard.sv
// Scoreboard stub (sem verificação)
// - Recebe transações do monitor
// - Conta/loga eventos; você pode inserir checagens depois
//============================================================

class rng_scoreboard extends uvm_scoreboard;
  `uvm_component_utils(rng_scoreboard)

  uvm_analysis_imp #(rng_seq_item, rng_scoreboard) imp;
  longint unsigned sample_count;

  function new(string name, uvm_component parent);
    super.new(name, parent);
    imp = new("imp", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    sample_count = 0;
  endfunction

  // Callback do analysis_imp
  virtual function void write(rng_seq_item t);
    sample_count++;
    `uvm_info("RNG_SCB", $sformatf("MON[%0d]: %s", sample_count, t.convert2string()), UVM_LOW)
  endfunction

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("RNG_SCB", $sformatf("Total de amostras recebidas: %0d", sample_count), UVM_NONE)
  endfunction

endclass
