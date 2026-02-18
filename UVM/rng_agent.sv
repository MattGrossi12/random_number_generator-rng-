//============================================================
// rng_agent.sv
// Agent genérico
// - Aggrega driver/sequencer (ativo) e monitor (sempre)
// - is_active pode ser overriden via uvm_config_db
//============================================================

class rng_agent extends uvm_agent;
  `uvm_component_utils(rng_agent)

  rng_sequencer sequencer;
  rng_driver    driver;
  rng_monitor   monitor;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    uvm_active_passive_enum cfg_is_active;

    super.build_phase(phase);

    // Permite configurar agent como PASSIVE sem editar o código
    if (uvm_config_db #(uvm_active_passive_enum)::get(this, "", "is_active", cfg_is_active)) begin
      is_active = cfg_is_active;
    end

    monitor = rng_monitor::type_id::create("monitor", this);

    if (is_active == UVM_ACTIVE) begin
      sequencer = rng_sequencer::type_id::create("sequencer", this);
      driver    = rng_driver   ::type_id::create("driver", this);
    end
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    if (is_active == UVM_ACTIVE) begin
      driver.seq_item_port.connect(sequencer.seq_item_export);
    end
  endfunction

endclass
