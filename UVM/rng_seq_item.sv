//============================================================
// rng_seq_item.sv
// Transação genérica para rng_top
// - Campos de estímulo (inputs)
// - Campos de observação (saídas amostradas pelo monitor)
//============================================================

//============================================================
// rng_seq_item.sv (ESQUELETO)
//============================================================

class rng_seq_item extends uvm_sequence_item;
  `uvm_object_utils(rng_seq_item)

  // -----------------------------
  // Estímulos (inputs do DUT)
  // (campos podem ser ajustados depois)
// -----------------------------
  rand bit          req_num;
  rand bit          wr;
  rand int unsigned hold_cycles;
  rand int unsigned idle_cycles;

  // -----------------------------
  // Observações (saídas do DUT)
  // -----------------------------
  bit [31:0] num_to_send_obs;

  function new(string name = "rng_seq_item");
    super.new(name);
  endfunction

  // Sem constraints, sem compare, sem print2string, etc.
  // Adicione depois conforme a estratégia de verificação.

endclass