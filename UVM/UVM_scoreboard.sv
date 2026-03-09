//============================================================
// rng_scoreboard.sv
//============================================================
class rng_scoreboard extends uvm_scoreboard;
  `uvm_component_utils(rng_scoreboard)

  localparam int unsigned EXPECTED_REQS = 24;

  uvm_analysis_imp #(int unsigned, rng_scoreboard) imp;

  // Total de requisicoes observadas (writes do monitor)
  longint unsigned sample_count;

  // Total de entradas realmente armazenadas na sequencia
  longint unsigned stored_count;

  // Quantidade de repeticoes reais dentro da sequencia armazenada
  longint unsigned dup_count;

  // Histograma apenas dos valores efetivamente registrados na sequencia
  int unsigned seen[int];

  // Sequencia comprimida: so registra quando o valor muda
  int unsigned seq[$];

  // Ultimo valor observado no monitor
  int unsigned last_val;
  bit          last_val_valid;

  function new(string name, uvm_component parent);
    super.new(name, parent);
    imp = new("imp", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    sample_count    = 0;
    stored_count    = 0;
    dup_count       = 0;
    last_val        = '0;
    last_val_valid  = 1'b0;
    seen.delete();
    seq.delete();
  endfunction

  virtual function void write(int unsigned val);
    sample_count++;

    // So armazena quando o valor muda em relacao ao ultimo observado.
    // Isso evita repetir no log um num_to_send que apenas permaneceu estavel.
    if (!last_val_valid || (val != last_val)) begin
      seq.push_back(val);
      stored_count++;

      if (seen.exists(val)) begin
        seen[val]++;
        dup_count++;
        `uvm_warning("RNG_DUP",
          $sformatf("Duplicado real na sequencia: val=%0d total_ocorrencias=%0d",
                    val, seen[val]))
      end
      else begin
        seen[val] = 1;
      end

      last_val       = val;
      last_val_valid = 1'b1;
    end
  endfunction

  function void report_phase(uvm_phase phase);
    int keys[$];
    string hist;
    string list;
    longint unsigned uniq;
    int i;

    super.report_phase(phase);

    keys.delete();
    foreach (seen[k]) begin
      keys.push_back(k);
    end
    keys.sort();

    hist = "";
    foreach (keys[i]) begin
      int k;
      k = keys[i];
      hist = {hist, $sformatf("%0d:%0d", k, seen[k])};
      if (i != keys.size() - 1) begin
        hist = {hist, ", "};
      end
    end

    list = "";
    for (i = 0; i < EXPECTED_REQS; i++) begin
      if (i < seq.size()) begin
        list = {list, $sformatf("%0d", seq[i])};
      end
      else begin
        list = {list, "x"};
      end

      if (i != EXPECTED_REQS - 1) begin
        list = {list, ", "};
      end
    end

    uniq = seen.num();

    `uvm_info("RNG_SCB",
      $sformatf("Resumo: requisicoes=%0d armazenados=%0d unicos=%0d duplicados_reais=%0d",
                sample_count, stored_count, uniq, dup_count),
      UVM_NONE)

    `uvm_info("RNG_SCB",
      $sformatf("Histograma=[%s]", hist),
      UVM_NONE)

    `uvm_info("RNG_SCB",
      $sformatf("Sequencia=[%s]", list),
      UVM_LOW)

    if (sample_count != EXPECTED_REQS) begin
      `uvm_warning("RNG_SCB",
        $sformatf("Requisicoes != %0d (requisicoes=%0d). Se o DUT usa outro handshake, ajuste o monitor.",
                  EXPECTED_REQS, sample_count))
    end

    if (seq.size() < EXPECTED_REQS) begin
      `uvm_info("RNG_SCB",
        $sformatf("Sequencia completada com x: capturados=%0d faltantes=%0d",
                  seq.size(), EXPECTED_REQS - seq.size()),
        UVM_LOW)
    end
  endfunction
endclass