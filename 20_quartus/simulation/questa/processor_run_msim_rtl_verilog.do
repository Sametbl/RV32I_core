transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -vlog01compat -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/instruction_cache.v}
vlog -vlog01compat -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/RAM_1port.v}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components/bcdtohex.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components/shifter_32bit.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components/register.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components/mux.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components/encoder.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components/D_flip_flop.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components/comparators.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/datapath_components/adder_32bit.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/include {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/include/pipeline_pkg.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/hazard_detection.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/forwarding_unit.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/br_prediction_unit.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/processor_wrapper.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/regfile.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/processor.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/lsu.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/fetch_unit.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/decoder.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/arbitrator.sv}
vlog -sv -work work +incdir+I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src {I:/OneDrive/Desktop/Design_A_MCU/RV32I/20_quartus/src/alu.sv}

