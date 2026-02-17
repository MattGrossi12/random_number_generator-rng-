# Ferramentas
YOSYS      ?= yosys
NETLISTSVG ?= netlistsvg
INKSCAPE   ?= inkscape

# Diretório dos fontes
SRC_DIR := ../src

# Fontes do projeto
SRCS := \
	$(SRC_DIR)/rng_top.v \
	$(SRC_DIR)/rng_control_path.v \
	$(SRC_DIR)/rng_data_path.v \
	$(SRC_DIR)/rng_data_base.vh \
	$(SRC_DIR)/rng_data_path_counter.v \
	$(SRC_DIR)/rng_selector.v \
	$(SRC_DIR)/rng_hs_dup_detector.v

# Scripts
SYNTH_GATE := synth_gate.ys
SYNTH_TOP  := synth_top.ys

# Saídas gate-level
GATE_V    := netlist_gate.v
GATE_JSON := netlist_gate.json
GATE_SVG  := netlist_gate.svg
GATE_PNG  := netlist_gate.png

# Saídas "bloquinhos"
TOP_V     := netlist_top.v
TOP_JSON  := netlist_top.json
TOP_SVG   := netlist_top.svg
TOP_PNG   := netlist_top.png

# (Opcional) skin do netlistsvg:
# make svg SKIN=/caminho/skin.svg
SKIN ?=
NETLISTSVG_FLAGS :=
ifneq ($(strip $(SKIN)),)
NETLISTSVG_FLAGS += --skin $(SKIN)
endif

# (Opcional) DPI do PNG
DPI ?= 200

.PHONY: all gate top svg png clean

all: gate top png

# -----------------------
# Gate-level
# -----------------------
gate: $(GATE_V) $(GATE_JSON)

$(GATE_V) $(GATE_JSON): $(SYNTH_GATE) $(SRCS)
	$(YOSYS) -q -s $(SYNTH_GATE)

# -----------------------
# "Bloquinhos"
# -----------------------
top: $(TOP_V) $(TOP_JSON)

$(TOP_V) $(TOP_JSON): $(SYNTH_TOP) $(SRCS)
	$(YOSYS) -q -s $(SYNTH_TOP)

# -----------------------
# SVGs (JSON -> SVG)
# -----------------------
svg: $(GATE_SVG) $(TOP_SVG)

$(GATE_SVG): $(GATE_JSON)
	$(NETLISTSVG) $(GATE_JSON) -o $(GATE_SVG) $(NETLISTSVG_FLAGS)

$(TOP_SVG): $(TOP_JSON)
	$(NETLISTSVG) $(TOP_JSON) -o $(TOP_SVG) $(NETLISTSVG_FLAGS)

# -----------------------
# PNGs (SVG -> PNG) via Inkscape
# -----------------------
png: $(GATE_PNG) $(TOP_PNG)

$(GATE_PNG): $(GATE_SVG)
	$(INKSCAPE) $(GATE_SVG) --export-type=png --export-filename=$(GATE_PNG) --export-dpi=$(DPI)

$(TOP_PNG): $(TOP_SVG)
	$(INKSCAPE) $(TOP_SVG) --export-type=png --export-filename=$(TOP_PNG) --export-dpi=$(DPI)

clean:
	rm -f \
	  $(GATE_V) $(GATE_JSON) $(GATE_SVG) $(GATE_PNG) \
	  $(TOP_V)  $(TOP_JSON)  $(TOP_SVG)  $(TOP_PNG) \
	  yosys.log
