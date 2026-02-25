//============================================================
// rng_driver.sv
// Driver genérico para rng_top
// - Consome rng_seq_item do sequencer
// - Aplica req_num_i/wr_i via interface
// - Reset é gerenciado no top-level (tb), não pelo driver
//============================================================

//============================================================
// rng_driver.sv (ESQUELETO)
//============================================================

class rng_sequencer extends uvm_sequencer #(rng_seq_item);
  `uvm_component_utils(rng_sequencer)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction
endclass