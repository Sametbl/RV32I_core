-f ./../../00_src/datapath_components/datapath_components_flist.f
./../../00_src/include/pipeline_pkg.sv

./../../00_src/instruction_cache.sv
./../../00_src/fetch_unit.sv
./../../00_src/br_prediction_unit.sv
./../../00_src/decoder.sv
./../../00_src/hazard_detection.sv
./../../00_src/regfile.sv
./../../00_src/forwarding_unit.sv
./../../00_src/arbitrator.sv
./../../00_src/alu.sv
./../../00_src/lsu.sv
./../../00_src/RAM_1port.sv
./../../00_src/processor.sv
./../../01_tb/processor_tb.sv

--timescale  1ns/1ps
--top-module processor_tb
