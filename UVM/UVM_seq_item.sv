//============================================================
// rng_seq_item.sv
//============================================================
class rng_seq_item extends uvm_sequence_item;
  `uvm_object_utils(rng_seq_item)

  // Identificacao da rodada (1..24)
  int unsigned round_id;

  // Clock: toggle a cada clk_toggle_tu (TU)
  time clk_toggle_tu;

  // Intervalo entre solicitacoes (TU) - requisito do usuario
  rand int unsigned inter_req_tu;

  function new(string name="rng_seq_item");
    super.new(name);
  endfunction

  function string convert2string();
    return $sformatf("round=%0d clk_toggle=%0tTU(period=%0tTU) inter_req=%0dTU",
                     round_id, clk_toggle_tu, 2*clk_toggle_tu, inter_req_tu);
  endfunction
endclass
