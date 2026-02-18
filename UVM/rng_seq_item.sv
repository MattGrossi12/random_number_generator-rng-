//============================================================
// rng_seq_item.sv
// Transação genérica para rng_top
// - Campos de estímulo (inputs)
// - Campos de observação (saídas amostradas pelo monitor)
//============================================================

class rng_seq_item extends uvm_sequence_item;
  `uvm_object_utils(rng_seq_item)

  // -----------------------------
  // Estímulos (inputs do DUT)
  // -----------------------------
  rand bit req_num;
  rand bit wr;

  // Por padrão, a maioria dos blocos usa pulsos de 1 ciclo.
  // Você pode mudar esta semântica no seu driver/sequence.
  rand int unsigned hold_cycles = 1;
  rand int unsigned idle_cycles = 0;

  // -----------------------------
  // Observação (saídas do DUT)
  // -----------------------------
  // Largura real depende do parâmetro WIDTH do DUT.
  // Para manter o item genérico, armazenamos em 32 bits e mascaramos quando necessário.
  bit [31:0] num_to_send_obs;

  function new(string name = "rng_seq_item");
    super.new(name);
  endfunction

  // Conveniência: representação textual curta (útil em debug)
  function string convert2string();
    return $sformatf("req_num=%0b wr=%0b hold=%0d idle=%0d num_obs=0x%0h",
                    req_num, wr, hold_cycles, idle_cycles, num_to_send_obs);
  endfunction

endclass
