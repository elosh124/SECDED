COMPILER  = verilator
FLAGS     = -Wall --binary --cc --build --trace --timing --top-module
WAVE      = gtkwave

BUILD_DIR = build
SRC_DIR   = src
P_FILES   = $(shell find $(SRC_DIR)/1_cycle_part -type f -name "*.sv")
T_FILES   = $(shell find $(SRC_DIR)/1_cycle_tot -type f -name "*.sv")

TB_NAME   = testbench
W_NAME    = waveform.vcd

build:
	mkdir -p $(BUILD_DIR)
	mkdir -p $(BUILD_DIR)/1_cycle_part
	mkdir -p $(BUILD_DIR)/1_cycle_tot

partial: $(P_FILES)
	$(COMPILER) --Mdir $(BUILD_DIR)/1_cycle_part/ $(FLAGS) $(TB_NAME) $(P_FILES)
	./$(BUILD_DIR)/1_cycle_part/V${TB_NAME} +dumpfile=./$(BUILD_DIR)/1_cycle_part/$(W_NAME)

partial_wave: build partial
	$(WAVE) $(BUILD_DIR)/1_cycle_part/$(W_NAME)

total: $(T_FILES)
	$(COMPILER) --Mdir $(BUILD_DIR)/1_cycle_tot/ $(FLAGS) $(TB_NAME) $(T_FILES)
	./$(BUILD_DIR)/1_cycle_tot/V${TB_NAME} +dumpfile=./$(BUILD_DIR)/1_cycle_tot/$(W_NAME)

total_wave: build total
	$(WAVE) $(BUILD_DIR)/1_cycle_tot/$(W_NAME)

clean:
	rm -rf $(BUILD_DIR)
