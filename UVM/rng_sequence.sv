//============================================================
// rng_sequence.sv
// Sequências de exemplo (placeholder)
// - A ideia aqui é só fornecer a estrutura UVM.
// - Você pode substituir/estender livremente.
//============================================================

class rng_base_sequence extends uvm_sequence #(rng_seq_item);
  `uvm_object_utils(rng_base_sequence)

  // Por padrão, gera 0 itens (sequência "vazia").
  // Ajuste no seu teste ou crie novas sequências.
  int unsigned num_items = 0;

  function new(string name = "rng_base_sequence");
    super.new(name);
  endfunction

  virtual task body();
    rng_seq_item tr;
    repeat (num_items) begin
      tr = rng_seq_item::type_id::create("tr");
      start_item(tr);
      // Placeholders (não randomiza nem aplica semântica específica)
      tr.req_num = 0;
      tr.wr      = 0;
      tr.hold_cycles = 1;
      tr.idle_cycles = 0;
      finish_item(tr);
    end
  endtask

endclass

// Sequência "smoke" opcional: gera alguns pulsos triviais
// (pode ser útil para ver o DUT "rodando" rapidamente).
class rng_smoke_sequence extends rng_base_sequence;
  `uvm_object_utils(rng_smoke_sequence)

  function new(string name = "rng_smoke_sequence");
    super.new(name);
    num_items = 10;
  endfunction

  virtual task body();
    rng_seq_item tr;
    for (int i = 0; i < int'(num_items); i++) begin
      tr = rng_seq_item::type_id::create($sformatf("tr_%0d", i));
      start_item(tr);
      tr.req_num = 1'b1;
      tr.wr      = 1'b1;      // se o seu DUT usa wr como "valid/ack", ajuste aqui
      tr.hold_cycles = 1;
      tr.idle_cycles = 1;
      finish_item(tr);
    end
  endtask

endclass
