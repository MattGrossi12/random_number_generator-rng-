//============================================================
// rng_monitor.sv
// Monitor genérico para rng_top
// - Amostra sinais na interface (clocking block mon_cb)
// - Publica rng_seq_item via analysis_port
// - Sem checagem: apenas observabilidade / logging
//============================================================

class rng_monitor extends uvm_monitor;
  `uvm_component_utils(rng_monitor)

  virtual rng_if vif;
  uvm_analysis_port #(rng_seq_item) ap;

  function new(string name, uvm_component parent);
    super.new(name, parent);
    ap = new("ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db #(virtual rng_if)::get(this, "", "vif", vif)) begin
      `uvm_fatal("NOVIF", "Interface rng_if nao encontrada (set via uvm_config_db)")
    end
  endfunction

  task run_phase(uvm_phase phase);
    rng_seq_item tr;

    forever begin
      @(vif.mon_cb);

      // Durante reset, normalmente ignoramos amostras
      if (vif.mon_cb.rst_i) begin
        continue;
      end

      // Estratégia default (bem conservadora): publica quando há request.
      // Se você quiser rastrear tudo, remova o if.
      if (vif.mon_cb.req_num_i) begin
        tr = rng_seq_item::type_id::create("mon_tr");
        tr.req_num = vif.mon_cb.req_num_i;
        tr.wr      = vif.mon_cb.wr_i;
        // Zero-extend/truncate automaticamente para 32 bits
        tr.num_to_send_obs = vif.mon_cb.num_to_send_o;
        ap.write(tr);
      end
    end
  endtask

endclass
