//============================================================
// UVM_sequence.sv
//
// Gera 24 rodadas com:
// - rodadas  1.. 8: clk_toggle=3 TU  , inter_req_tu random [5..100]
// - rodadas  9..16: clk_toggle=7 TU  , inter_req_tu random [15..150]
// - rodadas 17..24: clk_toggle=10 TU , inter_req_tu random [25..250]
//============================================================
class rng_sequence extends uvm_sequence #(rng_seq_item);
  `uvm_object_utils(rng_sequence)

  int unsigned num_rounds = 24;
  int unsigned seed = 0;
  bit          use_seed = 0;

  function new(string name="rng_sequence");
    super.new(name);
  endfunction

  virtual task body();
    rng_seq_item tr;
    int unsigned s;
    int unsigned lo;
    int unsigned hi;
    time         clk_tog;
    int unsigned inter_req_tmp;

    s = use_seed ? seed : $urandom;
    this.srandom(s);

    `uvm_info("RNG_SEQ",
      $sformatf("Iniciando rng_sequence: num_rounds=%0d seed=%0d", num_rounds, s),
      UVM_LOW)

    for (int r = 1; r <= int'(num_rounds); r++) begin
      if (r <= 8) begin
        clk_tog = 3;
        lo      = 5;
        hi      = 100;
      end
      else if (r <= 16) begin
        clk_tog = 7;
        lo      = 15;
        hi      = 150;
      end
      else begin
        clk_tog = 10;
        lo      = 25;
        hi      = 250;
      end

      tr = rng_seq_item::type_id::create($sformatf("tr_r%0d", r));
      start_item(tr);

      tr.round_id      = r;
      tr.clk_toggle_tu = clk_tog;

      // Para maximizar compatibilidade no Verilator, evita std::randomize(... ) with
      // e usa $urandom_range para gerar o intervalo requisitado.
      inter_req_tmp   = $urandom_range(hi, lo);
      tr.inter_req_tu = inter_req_tmp;

      `uvm_info("RNG_SEQ_ITEM",
        $sformatf("Gerado: %s", tr.convert2string()),
        UVM_LOW)

      finish_item(tr);
    end
  endtask
endclass