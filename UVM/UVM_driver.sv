//============================================================
// UVM_driver.sv
//
// Protocolo alinhado com a especificacao:
// 1) espera inter_req_tu
// 2) sobe req_num_i
// 3) mantém req_num_i alto por 1 ciclo completo para "visualizacao"
// 4) sobe wr_i somente depois
// 5) mantém req_num_i e wr_i altos juntos por 1 ciclo completo
// 6) derruba ambos
//
// Tudo alinhado em negedge para evitar race com always_ff @(posedge clk)
//============================================================
class rng_driver extends uvm_driver #(rng_seq_item);
  `uvm_component_utils(rng_driver)

  virtual rng_if vif;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    if (!uvm_config_db #(virtual rng_if)::get(this, "", "vif", vif)) begin
      `uvm_fatal("NOVIF", "vif nao encontrado")
    end
  endfunction

  task automatic drive_idle();
    vif.req_num_i <= 1'b0;
    vif.wr_i      <= 1'b0;
  endtask

  // Sobe req_num_i e mantem por 1 ciclo completo para visualizacao
  task automatic request_number(int unsigned round_id);
    time t_on;
    time t_off;

    @(negedge vif.clk_i);
    vif.req_num_i <= 1'b1;
    vif.wr_i      <= 1'b0;
    t_on = $time;

    // 1 ciclo completo de visualizacao
    @(negedge vif.clk_i);
    t_off = $time;

    `uvm_info("RNG_DRV",
      $sformatf("round=%0d REQ_WINDOW req_num_i=1 de %0t ate %0t (dur=%0tTU)",
                round_id, t_on, t_off, (t_off - t_on)),
      UVM_LOW)
  endtask

  // Sobe wr_i depois da visualizacao e mantem ambos altos por 1 ciclo
  task automatic accept_number(int unsigned round_id);
    time t_wr_on;
    time t_wr_posedge;
    time t_both_off;

    @(negedge vif.clk_i);
    vif.wr_i <= 1'b1;
    t_wr_on = $time;

    // Garante posedge no meio com req_num_i=1 e wr_i=1
    @(posedge vif.clk_i);
    t_wr_posedge = $time;

    // Fecha o ciclo de aceite
    @(negedge vif.clk_i);
    vif.req_num_i <= 1'b0;
    vif.wr_i      <= 1'b0;
    t_both_off = $time;

    `uvm_info("RNG_DRV",
      $sformatf("round=%0d ACCEPT_WINDOW wr_i=1 em %0t | write_edge=%0t | ambos baixam em %0t",
                round_id, t_wr_on, t_wr_posedge, t_both_off),
      UVM_LOW)
  endtask

  task automatic drive_one_use(rng_seq_item tr);
    time t_start;

    drive_idle();
    t_start = $time;

    `uvm_info("RNG_DRV",
      $sformatf("BEGIN round=%0d clk_toggle=%0tTU(period=%0tTU) inter_req=%0dTU t=%0t",
                tr.round_id, tr.clk_toggle_tu, 2*tr.clk_toggle_tu, tr.inter_req_tu, t_start),
      UVM_LOW)

    // Ajusta clock da rodada em negedge
    @(negedge vif.clk_i);
    vif.clk_toggle_tu = tr.clk_toggle_tu;

    `uvm_info("RNG_DRV",
      $sformatf("round=%0d clock atualizado: clk_toggle_tu=%0tTU (periodo=%0tTU)",
                tr.round_id, tr.clk_toggle_tu, 2*tr.clk_toggle_tu),
      UVM_LOW)

    // Intervalo entre solicitacoes
    #(tr.inter_req_tu);

    // 1) Usuario solicita/ver numero
    request_number(tr.round_id);

    // 2) Usuario decide aceitar, entao wr vem depois
    accept_number(tr.round_id);

    `uvm_info("RNG_DRV",
      $sformatf("END round=%0d t=%0t", tr.round_id, $time),
      UVM_LOW)

    drive_idle();
  endtask

  task run_phase(uvm_phase phase);
    rng_seq_item tr;

    super.run_phase(phase);

    drive_idle();

    // Reset ativo-baixo: espera ser aplicado e depois liberado
    wait (vif.rst_i == 1'b0);
    wait (vif.rst_i == 1'b1);

    `uvm_info("RNG_DRV",
      $sformatf("Reset liberado em t=%0t. Iniciando rodadas.", $time),
      UVM_LOW)

    forever begin
      seq_item_port.get_next_item(tr);
      drive_one_use(tr);
      seq_item_port.item_done();
    end
  endtask

endclass