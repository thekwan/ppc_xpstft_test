#################################################################
# Makefile generated by Xilinx Platform Studio 
# Project:/home/deokhwan/Work/FPGA2/hw/ppc_xpstft_test/system.xmp
#
# WARNING : This file will be re-generated every time a command
# to run a make target is invoked. So, any changes made to this  
# file manually, will be lost when make is invoked next. 
#################################################################

XILINX_EDK_DIR = /opt/Xilinx/14.3/ISE_DS/EDK

SYSTEM = system

MHSFILE = system.mhs

FPGA_ARCH = virtex5

DEVICE = xc5vfx70tff1136-1

INTSTYLE = default

XPS_HDL_LANG = vhdl
GLOBAL_SEARCHPATHOPT = 
PROJECT_SEARCHPATHOPT = 

SEARCHPATHOPT = $(PROJECT_SEARCHPATHOPT) $(GLOBAL_SEARCHPATHOPT)

SUBMODULE_OPT = 

PLATGEN_OPTIONS = -p $(DEVICE) -lang $(XPS_HDL_LANG) -intstyle $(INTSTYLE) $(SEARCHPATHOPT) $(SUBMODULE_OPT) -msg __xps/ise/xmsgprops.lst -parallel yes

OBSERVE_PAR_OPTIONS = -error yes

MICROBLAZE_BOOTLOOP = $(XILINX_EDK_DIR)/sw/lib/microblaze/mb_bootloop.elf
MICROBLAZE_BOOTLOOP_LE = $(XILINX_EDK_DIR)/sw/lib/microblaze/mb_bootloop_le.elf
PPC405_BOOTLOOP = $(XILINX_EDK_DIR)/sw/lib/ppc405/ppc_bootloop.elf
PPC440_BOOTLOOP = $(XILINX_EDK_DIR)/sw/lib/ppc440/ppc440_bootloop.elf
BOOTLOOP_DIR = bootloops

PPC440_0_BOOTLOOP = $(BOOTLOOP_DIR)/ppc440_0.elf

BRAMINIT_ELF_IMP_FILES = $(PPC440_0_BOOTLOOP)
BRAMINIT_ELF_IMP_FILE_ARGS = -pe ppc440_0 $(PPC440_0_BOOTLOOP)

BRAMINIT_ELF_SIM_FILES = $(PPC440_0_BOOTLOOP)
BRAMINIT_ELF_SIM_FILE_ARGS = -pe ppc440_0 $(PPC440_0_BOOTLOOP)

SIM_CMD = xterm -e ./isim_system

BEHAVIORAL_SIM_SCRIPT = simulation/behavioral/$(SYSTEM)_setup.tcl

STRUCTURAL_SIM_SCRIPT = simulation/structural/$(SYSTEM)_setup.tcl

TIMING_SIM_SCRIPT = simulation/timing/$(SYSTEM)_setup.tcl

DEFAULT_SIM_SCRIPT = $(BEHAVIORAL_SIM_SCRIPT)

SIMGEN_OPTIONS = -p $(DEVICE) -lang $(XPS_HDL_LANG) -intstyle $(INTSTYLE) $(SEARCHPATHOPT) $(BRAMINIT_ELF_SIM_FILE_ARGS) -msg __xps/ise/xmsgprops.lst -s isim


CORE_STATE_DEVELOPMENT_FILES = /opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/family.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/family_support.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/coregen_comp_defs.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/common_types_pkg.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/proc_common_pkg.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/conv_funs_pkg.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/ipif_pkg.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/async_fifo_fg.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/sync_fifo_fg.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/basic_sfifo_fg.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/blk_mem_gen_wrapper.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/addsub.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/counter_bit.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/counter.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/direct_path_cntr.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/direct_path_cntr_ai.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/down_counter.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/eval_timer.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/inferred_lut4.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/ipif_steer.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/ipif_steer128.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/ipif_mirror128.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/ld_arith_reg.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/ld_arith_reg2.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/mux_onehot.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/or_bits.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/or_muxcy.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/or_gate.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/or_gate128.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/pf_adder_bit.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/pf_adder.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/pf_counter_bit.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/pf_counter.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/pf_counter_top.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/pf_occ_counter.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/pf_occ_counter_top.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/pf_dpram_select.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/pselect.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/pselect_mask.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/srl16_fifo.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/srl_fifo.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/srl_fifo2.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/srl_fifo3.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/srl_fifo_rbu.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/valid_be.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/or_with_enable_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/muxf_struct_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/cntr_incr_decr_addn_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/dynshreg_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/dynshreg_i_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/mux_onehot_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/srl_fifo_rbu_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/srl_fifo_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/compare_vectors_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/pselect_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/counter_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/or_muxcy_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/or_gate_f.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/soft_reset.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_slave_single_v1_01_a/hdl/vhdl/plb_address_decoder.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_slave_single_v1_01_a/hdl/vhdl/plb_slave_attachment.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_slave_single_v1_01_a/hdl/vhdl/plbv46_slave_single.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_master_burst_v1_01_a/hdl/vhdl/plb_mstr_addr_gen.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_master_burst_v1_01_a/hdl/vhdl/rd_wr_calc_burst.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_master_burst_v1_01_a/hdl/vhdl/rd_wr_controller.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_master_burst_v1_01_a/hdl/vhdl/llink_rd_backend_no_fifo.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_master_burst_v1_01_a/hdl/vhdl/llink_wr_backend_no_fifo.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_master_burst_v1_01_a/hdl/vhdl/data_width_adapter.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_master_burst_v1_01_a/hdl/vhdl/data_mirror_128.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_master_burst_v1_01_a/hdl/vhdl/cc_brst_exp_adptr.vhd \
/opt/Xilinx/14.3/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_master_burst_v1_01_a/hdl/vhdl/plbv46_master_burst.vhd \
pcores/dcmi_ip_v1_00_b/hdl/vhdl/frame_det.vhd \
pcores/dcmi_ip_v1_00_b/hdl/vhdl/frame_gen.vhd \
pcores/dcmi_ip_v1_00_b/hdl/vhdl/user_logic.vhd \
pcores/dcmi_ip_v1_00_b/hdl/vhdl/dcmi_ip.vhd \
pcores/sccb_ip_v1_00_a/hdl/verilog/user_logic.v \
pcores/sccb_ip_v1_00_a/hdl/vhdl/sccb_ip.vhd

WRAPPER_NGC_FILES = implementation/system_ppc440_0_wrapper.ngc \
implementation/system_plb_v46_0_wrapper.ngc \
implementation/system_xps_bram_if_cntlr_1_wrapper.ngc \
implementation/system_xps_bram_if_cntlr_1_bram_wrapper.ngc \
implementation/system_ddr2_sdram_wrapper.ngc \
implementation/system_dip_switches_8bit_wrapper.ngc \
implementation/system_flash_wrapper.ngc \
implementation/system_hard_ethernet_mac_wrapper.ngc \
implementation/system_iic_eeprom_wrapper.ngc \
implementation/system_leds_8bit_wrapper.ngc \
implementation/system_leds_positions_wrapper.ngc \
implementation/system_push_buttons_5bit_wrapper.ngc \
implementation/system_rs232_uart_1_wrapper.ngc \
implementation/system_rs232_uart_2_wrapper.ngc \
implementation/system_xps_timebase_wdt_0_wrapper.ngc \
implementation/system_xps_timer_0_wrapper.ngc \
implementation/system_clock_generator_0_wrapper.ngc \
implementation/system_jtagppc_cntlr_inst_wrapper.ngc \
implementation/system_proc_sys_reset_0_wrapper.ngc \
implementation/system_xps_intc_0_wrapper.ngc \
implementation/system_xps_tft_0_wrapper.ngc \
implementation/system_dcmi_ip_0_wrapper.ngc \
implementation/system_sccb_ip_0_wrapper.ngc

POSTSYN_NETLIST = implementation/$(SYSTEM).ngc

SYSTEM_BIT = implementation/$(SYSTEM).bit

DOWNLOAD_BIT = implementation/download.bit

SYSTEM_ACE = implementation/$(SYSTEM).ace

UCF_FILE = data/system.ucf

BMM_FILE = implementation/$(SYSTEM).bmm

BITGEN_UT_FILE = etc/bitgen.ut

XFLOW_OPT_FILE = etc/fast_runtime.opt
XFLOW_DEPENDENCY = __xps/xpsxflow.opt $(XFLOW_OPT_FILE)

XPLORER_DEPENDENCY = __xps/xplorer.opt
XPLORER_OPTIONS = -p $(DEVICE) -uc $(SYSTEM).ucf -bm $(SYSTEM).bmm -max_runs 7

FPGA_IMP_DEPENDENCY = $(BMM_FILE) $(POSTSYN_NETLIST) $(UCF_FILE) $(XFLOW_DEPENDENCY)

SDK_EXPORT_DIR = SDK/SDK_Export/hw
SYSTEM_HW_HANDOFF = $(SDK_EXPORT_DIR)/$(SYSTEM).xml
SYSTEM_HW_HANDOFF_BIT = $(SDK_EXPORT_DIR)/$(SYSTEM).bit
SYSTEM_HW_HANDOFF_BMM = $(SDK_EXPORT_DIR)/$(SYSTEM)_bd.bmm
SYSTEM_HW_HANDOFF_DEP = $(SYSTEM_HW_HANDOFF) $(SYSTEM_HW_HANDOFF_BIT) $(SYSTEM_HW_HANDOFF_BMM)
