//============================================================
// rng_monitor.sv
//============================================================
class rng_monitor extends uvm_monitor;
  `uvm_component_utils(rng_monitor)

  virtual rng_if vif;
  uvm_analysis_port #(int unsigned) ap; // envia apenas o valor observado

  function new(string name, uvm_component parent);
    super.new(name, parent);
    ap = new("ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db #(virtual rng_if)::get(this, "", "vif", vif)) begin
      `uvm_fatal("NOVIF", "vif nao encontrado")
    end
  endfunction

  task run_phase(uvm_phase phase);
    int unsigned sample_idx;
    int unsigned val;

    super.run_phase(phase);
    sample_idx = 0;

    wait (vif.rst_i == 1'b1);

    forever begin
      @(posedge vif.clk_i);

      if (!vif.rst_i) begin
        continue;
      end

      if (vif.wr_i) begin
        uvm_wait_for_nba_region();
        val = int'(vif.num_to_send_o);
        `uvm_info("RNG_MON",
          $sformatf("WRITE_SAMPLE[%0d] t=%0t num_to_send_o=%0d", sample_idx, $time, val),
          UVM_LOW)
        ap.write(val);
        sample_idx++;
      end
    end
  endtask
endclass
