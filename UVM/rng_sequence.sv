//============================================================
// rng_sequence.sv
// Sequências de exemplo (placeholder)
// - A ideia aqui é só fornecer a estrutura UVM.
// - Você pode substituir/estender livremente.
//============================================================

//============================================================
// rng_sequence.sv (ESQUELETO)
//============================================================

class rng_base_sequence extends uvm_sequence #(rng_seq_item);
  `uvm_object_utils(rng_base_sequence)

  // Número de itens a gerar (você define depois)
  int unsigned num_items = 0;

  function new(string name = "rng_base_sequence");
    super.new(name);
  endfunction

  virtual task body();
    // TODO: implementar estratégia de estímulos
    // Exemplo futuro:
    // for (int i = 0; i < num_items; i++) begin
    //   rng_seq_item tr = rng_seq_item::type_id::create($sformatf("tr_%0d", i));
    //   start_item(tr);
    //   // preencher campos aqui
    //   finish_item(tr);
    // end
  endtask

endclass