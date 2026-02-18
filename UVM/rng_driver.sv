//============================================================
// rng_driver.sv
// Driver genérico para rng_top
// - Consome rng_seq_item do sequencer
// - Aplica req_num_i/wr_i via interface
// - Reset é gerenciado no top-level (tb), não pelo driver
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
      `uvm_fatal("NOVIF", "Interface rng_if nao encontrada (set via uvm_config_db)")
    end
  endfunction

  task automatic drive_idle();
    vif.drv_cb.req_num_i <= 1'b0;
    vif.drv_cb.wr_i      <= 1'b0;
  endtask

  task run_phase(uvm_phase phase);
    // Inicializa em idle
    drive_idle();

    // Aguarda reset desassertar (rst_i ativo em '1')
    @(posedge vif.clk_i);
    wait (vif.mon_cb.rst_i == 1'b0);

    forever begin
      seq_item_port.get_next_item(req);

      // Drive simples: mantém sinais por hold_cycles e depois volta a 0
      repeat (req.hold_cycles) begin
        @(vif.drv_cb);
        vif.drv_cb.req_num_i <= req.req_num;
        vif.drv_cb.wr_i      <= req.wr;
      end

      @(vif.drv_cb);
      drive_idle();

      // Espaçamento entre transações
      repeat (req.idle_cycles) begin
        @(vif.drv_cb);
        drive_idle();
      end

      seq_item_port.item_done();
    end
  endtask

endclass
