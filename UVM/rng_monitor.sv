//============================================================
// rng_monitor.sv
// Monitor genérico para rng_top
// - Amostra sinais na interface (clocking block mon_cb)
// - Publica rng_seq_item via analysis_port
// - Sem checagem: apenas observabilidade / logging
//============================================================
//============================================================
// rng_monitor.sv (ESQUELETO)
//============================================================

class rng_monitor extends uvm_monitor;
  `uvm_component_utils(rng_monitor)

  virtual rng_if vif;
  uvm_analysis_port #(rng_seq_item) ap;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    ap = new("ap", this);

    if (!uvm_config_db#(virtual rng_if)::get(this, "", "vif", vif)) begin
      `uvm_fatal("NO_VIF", "Interface virtual rng_if não configurada no monitor")
    end
  endfunction

  task run_phase(uvm_phase phase);
    super.run_phase(phase);

    // TODO: definir quando e como amostrar sinais e publicar rng_seq_item
    // Exemplo futuro:
    // forever begin
    //   @(vif.mon_cb);
    //   rng_seq_item tr = rng_seq_item::type_id::create("mon_tr");
    //   tr.req_num       = vif.mon_cb.req_num_i;
    //   tr.wr            = vif.mon_cb.wr_i;
    //   tr.num_to_send_obs = vif.mon_cb.num_to_send_o;
    //   ap.write(tr);
    // end
  endtask

endclass
