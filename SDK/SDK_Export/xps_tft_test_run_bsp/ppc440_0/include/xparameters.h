
/*******************************************************************
*
* CAUTION: This file is automatically generated by libgen.
* Version: Xilinx EDK 14.3 EDK_P.40xd
* DO NOT EDIT.
*
* Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.

* 
* Description: Driver parameters
*
*******************************************************************/

#define STDIN_BASEADDRESS 0x84020000
#define STDOUT_BASEADDRESS 0x84020000

/******************************************************************/


/* Definitions for peripheral DCMI_IP_0 */
#define XPAR_DCMI_IP_0_BASEADDR 0x8E000000
#define XPAR_DCMI_IP_0_HIGHADDR 0x8E000FFF


/* Definitions for peripheral SCCB_IP_0 */
#define XPAR_SCCB_IP_0_BASEADDR 0x8F000000
#define XPAR_SCCB_IP_0_HIGHADDR 0x8F000FFF


/******************************************************************/


/* Definitions for peripheral DDR2_SDRAM */
#define XPAR_DDR2_SDRAM_MEM_BASEADDR 0x00000000
#define XPAR_DDR2_SDRAM_MEM_HIGHADDR 0x0FFFFFFF


/******************************************************************/

/* Definitions for driver GPIO */
#define XPAR_XGPIO_NUM_INSTANCES 4

/* Definitions for peripheral DIP_SWITCHES_8BIT */
#define XPAR_DIP_SWITCHES_8BIT_BASEADDR 0x81460000
#define XPAR_DIP_SWITCHES_8BIT_HIGHADDR 0x8146FFFF
#define XPAR_DIP_SWITCHES_8BIT_DEVICE_ID 0
#define XPAR_DIP_SWITCHES_8BIT_INTERRUPT_PRESENT 1
#define XPAR_DIP_SWITCHES_8BIT_IS_DUAL 0


/* Definitions for peripheral LEDS_8BIT */
#define XPAR_LEDS_8BIT_BASEADDR 0x81440000
#define XPAR_LEDS_8BIT_HIGHADDR 0x8144FFFF
#define XPAR_LEDS_8BIT_DEVICE_ID 1
#define XPAR_LEDS_8BIT_INTERRUPT_PRESENT 0
#define XPAR_LEDS_8BIT_IS_DUAL 0


/* Definitions for peripheral LEDS_POSITIONS */
#define XPAR_LEDS_POSITIONS_BASEADDR 0x81420000
#define XPAR_LEDS_POSITIONS_HIGHADDR 0x8142FFFF
#define XPAR_LEDS_POSITIONS_DEVICE_ID 2
#define XPAR_LEDS_POSITIONS_INTERRUPT_PRESENT 0
#define XPAR_LEDS_POSITIONS_IS_DUAL 0


/* Definitions for peripheral PUSH_BUTTONS_5BIT */
#define XPAR_PUSH_BUTTONS_5BIT_BASEADDR 0x81400000
#define XPAR_PUSH_BUTTONS_5BIT_HIGHADDR 0x8140FFFF
#define XPAR_PUSH_BUTTONS_5BIT_DEVICE_ID 3
#define XPAR_PUSH_BUTTONS_5BIT_INTERRUPT_PRESENT 1
#define XPAR_PUSH_BUTTONS_5BIT_IS_DUAL 0


/******************************************************************/


/* Definitions for peripheral FLASH */
#define XPAR_FLASH_NUM_BANKS_MEM 1


/******************************************************************/

/* Definitions for peripheral FLASH */
#define XPAR_FLASH_MEM0_BASEADDR 0x8C000000
#define XPAR_FLASH_MEM0_HIGHADDR 0x8DFFFFFF

/******************************************************************/

/* Canonical definitions for peripheral FLASH */
#define XPAR_EMC_0_NUM_BANKS_MEM 1
#define XPAR_EMC_0_MEM0_BASEADDR 0x8C000000
#define XPAR_EMC_0_MEM0_HIGHADDR 0x8DFFFFFF

#define XPAR_XPS_MCH_EMC

/******************************************************************/

/* Definitions for driver LLTEMAC */
#define XPAR_XLLTEMAC_NUM_INSTANCES 1

/* Definitions for peripheral HARD_ETHERNET_MAC Channel 0 */
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_DEVICE_ID 0
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_BASEADDR 0x87000000
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_HIGHADDR 0x8707ffff
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_TXCSUM 0
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_RXCSUM 0
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_PHY_TYPE 1
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_TXVLAN_TRAN 0
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_RXVLAN_TRAN 0
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_TXVLAN_TAG 0
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_RXVLAN_TAG 0
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_TXVLAN_STRP 0
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_RXVLAN_STRP 0
#define XPAR_HARD_ETHERNET_MAC_CHAN_0_MCAST_EXTEND 0

/* Canonical definitions for peripheral HARD_ETHERNET_MAC Channel 0 */
#define XPAR_LLTEMAC_0_DEVICE_ID 0
#define XPAR_LLTEMAC_0_BASEADDR 0x87000000
#define XPAR_LLTEMAC_0_HIGHADDR 0x8707ffff
#define XPAR_LLTEMAC_0_TXCSUM 0
#define XPAR_LLTEMAC_0_RXCSUM 0
#define XPAR_LLTEMAC_0_PHY_TYPE 1
#define XPAR_LLTEMAC_0_TXVLAN_TRAN 0
#define XPAR_LLTEMAC_0_RXVLAN_TRAN 0
#define XPAR_LLTEMAC_0_TXVLAN_TAG 0
#define XPAR_LLTEMAC_0_RXVLAN_TAG 0
#define XPAR_LLTEMAC_0_TXVLAN_STRP 0
#define XPAR_LLTEMAC_0_RXVLAN_STRP 0
#define XPAR_LLTEMAC_0_MCAST_EXTEND 0
#define XPAR_LLTEMAC_0_INTR 8


/* LocalLink TYPE Enumerations */
#define XPAR_LL_FIFO    1
#define XPAR_LL_DMA     2


/* Canonical LocalLink parameters for HARD_ETHERNET_MAC */
#define XPAR_LLTEMAC_0_LLINK_CONNECTED_TYPE XPAR_LL_DMA
#define XPAR_LLTEMAC_0_LLINK_CONNECTED_BASEADDR 0x80
#define XPAR_LLTEMAC_0_LLINK_CONNECTED_FIFO_INTR 0xFF
#define XPAR_LLTEMAC_0_LLINK_CONNECTED_DMATX_INTR 11
#define XPAR_LLTEMAC_0_LLINK_CONNECTED_DMARX_INTR 10


/******************************************************************/

/* Definitions for driver IIC */
#define XPAR_XIIC_NUM_INSTANCES 1

/* Definitions for peripheral IIC_EEPROM */
#define XPAR_IIC_EEPROM_DEVICE_ID 0
#define XPAR_IIC_EEPROM_BASEADDR 0x81600000
#define XPAR_IIC_EEPROM_HIGHADDR 0x8160FFFF
#define XPAR_IIC_EEPROM_TEN_BIT_ADR 0
#define XPAR_IIC_EEPROM_GPO_WIDTH 1


/******************************************************************/

/* Canonical definitions for peripheral IIC_EEPROM */
#define XPAR_IIC_0_DEVICE_ID XPAR_IIC_EEPROM_DEVICE_ID
#define XPAR_IIC_0_BASEADDR 0x81600000
#define XPAR_IIC_0_HIGHADDR 0x8160FFFF
#define XPAR_IIC_0_TEN_BIT_ADR 0
#define XPAR_IIC_0_GPO_WIDTH 1


/******************************************************************/

/* Definitions for driver UARTLITE */
#define XPAR_XUARTLITE_NUM_INSTANCES 2

/* Definitions for peripheral RS232_UART_1 */
#define XPAR_RS232_UART_1_BASEADDR 0x84020000
#define XPAR_RS232_UART_1_HIGHADDR 0x8402FFFF
#define XPAR_RS232_UART_1_DEVICE_ID 0
#define XPAR_RS232_UART_1_BAUDRATE 9600
#define XPAR_RS232_UART_1_USE_PARITY 0
#define XPAR_RS232_UART_1_ODD_PARITY 0
#define XPAR_RS232_UART_1_DATA_BITS 8


/* Definitions for peripheral RS232_UART_2 */
#define XPAR_RS232_UART_2_BASEADDR 0x84000000
#define XPAR_RS232_UART_2_HIGHADDR 0x8400FFFF
#define XPAR_RS232_UART_2_DEVICE_ID 1
#define XPAR_RS232_UART_2_BAUDRATE 9600
#define XPAR_RS232_UART_2_USE_PARITY 0
#define XPAR_RS232_UART_2_ODD_PARITY 0
#define XPAR_RS232_UART_2_DATA_BITS 8


/******************************************************************/

/* Canonical definitions for peripheral RS232_UART_1 */
#define XPAR_UARTLITE_0_DEVICE_ID XPAR_RS232_UART_1_DEVICE_ID
#define XPAR_UARTLITE_0_BASEADDR 0x84020000
#define XPAR_UARTLITE_0_HIGHADDR 0x8402FFFF
#define XPAR_UARTLITE_0_BAUDRATE 9600
#define XPAR_UARTLITE_0_USE_PARITY 0
#define XPAR_UARTLITE_0_ODD_PARITY 0
#define XPAR_UARTLITE_0_DATA_BITS 8
#define XPAR_UARTLITE_0_SIO_CHAN 0

/* Canonical definitions for peripheral RS232_UART_2 */
#define XPAR_UARTLITE_1_DEVICE_ID XPAR_RS232_UART_2_DEVICE_ID
#define XPAR_UARTLITE_1_BASEADDR 0x84000000
#define XPAR_UARTLITE_1_HIGHADDR 0x8400FFFF
#define XPAR_UARTLITE_1_BAUDRATE 9600
#define XPAR_UARTLITE_1_USE_PARITY 0
#define XPAR_UARTLITE_1_ODD_PARITY 0
#define XPAR_UARTLITE_1_DATA_BITS 8
#define XPAR_UARTLITE_1_SIO_CHAN 1


/******************************************************************/

/* Definitions for driver BRAM */
#define XPAR_XBRAM_NUM_INSTANCES 1

/* Definitions for peripheral XPS_BRAM_IF_CNTLR_1 */
#define XPAR_XPS_BRAM_IF_CNTLR_1_DEVICE_ID 0
#define XPAR_XPS_BRAM_IF_CNTLR_1_DATA_WIDTH 0
#define XPAR_XPS_BRAM_IF_CNTLR_1_ECC 0
#define XPAR_XPS_BRAM_IF_CNTLR_1_FAULT_INJECT 0
#define XPAR_XPS_BRAM_IF_CNTLR_1_CE_FAILING_REGISTERS 0
#define XPAR_XPS_BRAM_IF_CNTLR_1_UE_FAILING_REGISTERS 0
#define XPAR_XPS_BRAM_IF_CNTLR_1_ECC_STATUS_REGISTERS 0
#define XPAR_XPS_BRAM_IF_CNTLR_1_CE_COUNTER_WIDTH 0
#define XPAR_XPS_BRAM_IF_CNTLR_1_ECC_ONOFF_REGISTER 0
#define XPAR_XPS_BRAM_IF_CNTLR_1_ECC_ONOFF_RESET_VALUE 0
#define XPAR_XPS_BRAM_IF_CNTLR_1_WRITE_ACCESS 0
#define XPAR_XPS_BRAM_IF_CNTLR_1_BASEADDR 0xFFFE0000
#define XPAR_XPS_BRAM_IF_CNTLR_1_HIGHADDR 0xFFFFFFFF


/******************************************************************/

/* Canonical definitions for peripheral XPS_BRAM_IF_CNTLR_1 */
#define XPAR_BRAM_0_DEVICE_ID XPAR_XPS_BRAM_IF_CNTLR_1_DEVICE_ID
#define XPAR_BRAM_0_DATA_WIDTH 0
#define XPAR_BRAM_0_ECC 0
#define XPAR_BRAM_0_FAULT_INJECT 0
#define XPAR_BRAM_0_CE_FAILING_REGISTERS 0
#define XPAR_BRAM_0_UE_FAILING_REGISTERS 0
#define XPAR_BRAM_0_ECC_STATUS_REGISTERS 0
#define XPAR_BRAM_0_CE_COUNTER_WIDTH 0
#define XPAR_BRAM_0_ECC_ONOFF_REGISTER 0
#define XPAR_BRAM_0_ECC_ONOFF_RESET_VALUE 0
#define XPAR_BRAM_0_WRITE_ACCESS 0
#define XPAR_BRAM_0_BASEADDR 0xFFFE0000
#define XPAR_BRAM_0_HIGHADDR 0xFFFFFFFF


/******************************************************************/

#define XPAR_INTC_MAX_NUM_INTR_INPUTS 12
#define XPAR_XINTC_HAS_IPR 1
#define XPAR_XINTC_HAS_SIE 1
#define XPAR_XINTC_HAS_CIE 1
#define XPAR_XINTC_HAS_IVR 1
#define XPAR_XINTC_USE_DCR 0
/* Definitions for driver INTC */
#define XPAR_XINTC_NUM_INSTANCES 1

/* Definitions for peripheral XPS_INTC_0 */
#define XPAR_XPS_INTC_0_DEVICE_ID 0
#define XPAR_XPS_INTC_0_BASEADDR 0x81800000
#define XPAR_XPS_INTC_0_HIGHADDR 0x8180FFFF
#define XPAR_XPS_INTC_0_KIND_OF_INTR 0xFFFFF03A
#define XPAR_XPS_INTC_0_HAS_FAST 0
#define XPAR_XPS_INTC_0_IVAR_RESET_VALUE 0


/******************************************************************/

#define XPAR_INTC_SINGLE_BASEADDR 0x81800000
#define XPAR_INTC_SINGLE_HIGHADDR 0x8180FFFF
#define XPAR_INTC_SINGLE_DEVICE_ID XPAR_XPS_INTC_0_DEVICE_ID
#define XPAR_SYSTEM_FPGA_0_HARD_ETHERNET_MAC_PHY_MII_INT_PIN_0_MASK 0X000001
#define XPAR_XPS_INTC_0_SYSTEM_FPGA_0_HARD_ETHERNET_MAC_PHY_MII_INT_PIN_0_INTR 0
#define XPAR_XPS_TIMER_0_INTERRUPT_MASK 0X000002
#define XPAR_XPS_INTC_0_XPS_TIMER_0_INTERRUPT_INTR 1
#define XPAR_XPS_TIMEBASE_WDT_0_WDT_INTERRUPT_MASK 0X000004
#define XPAR_XPS_INTC_0_XPS_TIMEBASE_WDT_0_WDT_INTERRUPT_INTR 2
#define XPAR_XPS_TIMEBASE_WDT_0_TIMEBASE_INTERRUPT_MASK 0X000008
#define XPAR_XPS_INTC_0_XPS_TIMEBASE_WDT_0_TIMEBASE_INTERRUPT_INTR 3
#define XPAR_RS232_UART_2_INTERRUPT_MASK 0X000010
#define XPAR_XPS_INTC_0_RS232_UART_2_INTERRUPT_INTR 4
#define XPAR_RS232_UART_1_INTERRUPT_MASK 0X000020
#define XPAR_XPS_INTC_0_RS232_UART_1_INTERRUPT_INTR 5
#define XPAR_PUSH_BUTTONS_5BIT_IP2INTC_IRPT_MASK 0X000040
#define XPAR_XPS_INTC_0_PUSH_BUTTONS_5BIT_IP2INTC_IRPT_INTR 6
#define XPAR_IIC_EEPROM_IIC2INTC_IRPT_MASK 0X000080
#define XPAR_XPS_INTC_0_IIC_EEPROM_IIC2INTC_IRPT_INTR 7
#define XPAR_HARD_ETHERNET_MAC_TEMACINTC0_IRPT_MASK 0X000100
#define XPAR_XPS_INTC_0_HARD_ETHERNET_MAC_TEMACINTC0_IRPT_INTR 8
#define XPAR_DIP_SWITCHES_8BIT_IP2INTC_IRPT_MASK 0X000200
#define XPAR_XPS_INTC_0_DIP_SWITCHES_8BIT_IP2INTC_IRPT_INTR 9
#define XPAR_PPC440_0_DMA0RXIRQ_MASK 0X000400
#define XPAR_XPS_INTC_0_PPC440_0_DMA0RXIRQ_INTR 10
#define XPAR_PPC440_0_DMA0TXIRQ_MASK 0X000800
#define XPAR_XPS_INTC_0_PPC440_0_DMA0TXIRQ_INTR 11

/******************************************************************/

/* Canonical definitions for peripheral XPS_INTC_0 */
#define XPAR_INTC_0_DEVICE_ID XPAR_XPS_INTC_0_DEVICE_ID
#define XPAR_INTC_0_BASEADDR 0x81800000
#define XPAR_INTC_0_HIGHADDR 0x8180FFFF
#define XPAR_INTC_0_KIND_OF_INTR 0xFFFFF03A
#define XPAR_INTC_0_HAS_FAST 0
#define XPAR_INTC_0_IVAR_RESET_VALUE 0

#define XPAR_INTC_0_TMRCTR_0_VEC_ID XPAR_XPS_INTC_0_XPS_TIMER_0_INTERRUPT_INTR
#define XPAR_INTC_0_WDTTB_0_WDT_INTERRUPT_VEC_ID XPAR_XPS_INTC_0_XPS_TIMEBASE_WDT_0_WDT_INTERRUPT_INTR
#define XPAR_INTC_0_WDTTB_0_TIMEBASE_INTERRUPT_VEC_ID XPAR_XPS_INTC_0_XPS_TIMEBASE_WDT_0_TIMEBASE_INTERRUPT_INTR
#define XPAR_INTC_0_UARTLITE_1_VEC_ID XPAR_XPS_INTC_0_RS232_UART_2_INTERRUPT_INTR
#define XPAR_INTC_0_UARTLITE_0_VEC_ID XPAR_XPS_INTC_0_RS232_UART_1_INTERRUPT_INTR
#define XPAR_INTC_0_GPIO_3_VEC_ID XPAR_XPS_INTC_0_PUSH_BUTTONS_5BIT_IP2INTC_IRPT_INTR
#define XPAR_INTC_0_IIC_0_VEC_ID XPAR_XPS_INTC_0_IIC_EEPROM_IIC2INTC_IRPT_INTR
#define XPAR_INTC_0_LLTEMAC_0_VEC_ID XPAR_XPS_INTC_0_HARD_ETHERNET_MAC_TEMACINTC0_IRPT_INTR
#define XPAR_INTC_0_GPIO_0_VEC_ID XPAR_XPS_INTC_0_DIP_SWITCHES_8BIT_IP2INTC_IRPT_INTR
#define XPAR_INTC_0_CPU_PPC440_0_DMA0RXIRQ_VEC_ID XPAR_XPS_INTC_0_PPC440_0_DMA0RXIRQ_INTR
#define XPAR_INTC_0_CPU_PPC440_0_DMA0TXIRQ_VEC_ID XPAR_XPS_INTC_0_PPC440_0_DMA0TXIRQ_INTR

/******************************************************************/

/* Definitions for driver TFT */
#define XPAR_XTFT_NUM_INSTANCES 1

/* Definitions for peripheral XPS_TFT_0 */
#define XPAR_XPS_TFT_0_SPLB_BASEADDR 0x86E00000
#define XPAR_XPS_TFT_0_SPLB_HIGHADDR 0x86E0FFFF
#define XPAR_XPS_TFT_0_DEVICE_ID 0
#define XPAR_XPS_TFT_0_DEFAULT_TFT_BASE_ADDR 0x00000000
#define XPAR_XPS_TFT_0_DCR_SPLB_SLAVE_IF 1
#define XPAR_XPS_TFT_0_DCR_BASEADDR 0x00000000


/******************************************************************/

/* Canonical definitions for peripheral XPS_TFT_0 */
#define XPAR_TFT_0_DEVICE_ID XPAR_XPS_TFT_0_DEVICE_ID
#define XPAR_TFT_0_BASEADDR 0x86E00000
#define XPAR_TFT_0_HIGHADDR 0x86E0FFFF
#define XPAR_TFT_0_DEFAULT_TFT_BASE_ADDR 0x00000000
#define XPAR_TFT_0_DCR_SPLB_SLAVE_IF 1
#define XPAR_TFT_0_DCR_BASEADDR 0x00000000


/******************************************************************/

/* Definitions for driver WDTTB */
#define XPAR_XWDTTB_NUM_INSTANCES 1

/* Definitions for peripheral XPS_TIMEBASE_WDT_0 */
#define XPAR_XPS_TIMEBASE_WDT_0_DEVICE_ID 0
#define XPAR_XPS_TIMEBASE_WDT_0_BASEADDR 0x83A00000
#define XPAR_XPS_TIMEBASE_WDT_0_HIGHADDR 0x83A0FFFF


/******************************************************************/

/* Canonical definitions for peripheral XPS_TIMEBASE_WDT_0 */
#define XPAR_WDTTB_0_DEVICE_ID XPAR_XPS_TIMEBASE_WDT_0_DEVICE_ID
#define XPAR_WDTTB_0_BASEADDR 0x83A00000
#define XPAR_WDTTB_0_HIGHADDR 0x83A0FFFF


/******************************************************************/

/* Definitions for driver TMRCTR */
#define XPAR_XTMRCTR_NUM_INSTANCES 1

/* Definitions for peripheral XPS_TIMER_0 */
#define XPAR_XPS_TIMER_0_DEVICE_ID 0
#define XPAR_XPS_TIMER_0_BASEADDR 0x83C00000
#define XPAR_XPS_TIMER_0_HIGHADDR 0x83C0FFFF
#define XPAR_XPS_TIMER_0_CLOCK_FREQ_HZ 100000000


/******************************************************************/

/* Canonical definitions for peripheral XPS_TIMER_0 */
#define XPAR_TMRCTR_0_DEVICE_ID XPAR_XPS_TIMER_0_DEVICE_ID
#define XPAR_TMRCTR_0_BASEADDR 0x83C00000
#define XPAR_TMRCTR_0_HIGHADDR 0x83C0FFFF
#define XPAR_TMRCTR_0_CLOCK_FREQ_HZ XPAR_XPS_TIMER_0_CLOCK_FREQ_HZ

/******************************************************************/

/* Definition for PPC cacheable regions */
#define XPAR_CACHEABLE_REGION_MASK 0xC0000001
/******************************************************************/

/* Definitions for bus frequencies */
#define XPAR_CPU_PPC440_MPLB_FREQ_HZ 100000000
#define XPAR_CPU_PPC440_SPLB0_FREQ_HZ 100000000
/******************************************************************/

/* Canonical definitions for bus frequencies */
#define XPAR_PROC_BUS_0_FREQ_HZ 100000000
/******************************************************************/

#define XPAR_CPU_PPC440_CORE_CLOCK_FREQ_HZ 400000000
#define XPAR_PPC440_VIRTEX5_CORE_CLOCK_FREQ_HZ 400000000
#define XPAR_CPU_PPC440_IDCR_BASEADDR 0x00000000
#define XPAR_XLLDMA_USE_DCR
/******************************************************************/
#define XPAR_CPU_ID 0
#define XPAR_PPC440_VIRTEX5_ID 0
#define XPAR_PPC440_VIRTEX5_PIR 0b1111
#define XPAR_PPC440_VIRTEX5_ENDIAN_RESET 0
#define XPAR_PPC440_VIRTEX5_USER_RESET 0b0000
#define XPAR_PPC440_VIRTEX5_INTERCONNECT_IMASK 0xffffffff
#define XPAR_PPC440_VIRTEX5_ICU_RD_FETCH_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_ICU_RD_SPEC_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_ICU_RD_TOUCH_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_DCU_RD_LD_CACHE_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_DCU_RD_NONCACHE_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_DCU_RD_TOUCH_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_DCU_RD_URGENT_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_DCU_WR_FLUSH_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_DCU_WR_STORE_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_DCU_WR_URGENT_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_DMA0_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_DMA1_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_DMA2_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_DMA3_PLB_PRIO 0b00
#define XPAR_PPC440_VIRTEX5_IDCR_BASEADDR 0x00000000
#define XPAR_PPC440_VIRTEX5_IDCR_HIGHADDR 0x000000FF
#define XPAR_PPC440_VIRTEX5_APU_CONTROL 0b00010000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_0 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_1 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_2 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_3 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_4 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_5 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_6 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_7 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_8 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_9 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_10 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_11 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_12 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_13 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_14 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_APU_UDI_15 0b000000000000000000000000
#define XPAR_PPC440_VIRTEX5_PPC440MC_ADDR_BASE 0x00000000
#define XPAR_PPC440_VIRTEX5_PPC440MC_ADDR_HIGH 0x0fffffff
#define XPAR_PPC440_VIRTEX5_PPC440MC_ROW_CONFLICT_MASK 0x003FFE00
#define XPAR_PPC440_VIRTEX5_PPC440MC_BANK_CONFLICT_MASK 0x00C00000
#define XPAR_PPC440_VIRTEX5_PPC440MC_CONTROL 0xF810008F
#define XPAR_PPC440_VIRTEX5_PPC440MC_PRIO_ICU 4
#define XPAR_PPC440_VIRTEX5_PPC440MC_PRIO_DCUW 3
#define XPAR_PPC440_VIRTEX5_PPC440MC_PRIO_DCUR 2
#define XPAR_PPC440_VIRTEX5_PPC440MC_PRIO_SPLB1 0
#define XPAR_PPC440_VIRTEX5_PPC440MC_PRIO_SPLB0 1
#define XPAR_PPC440_VIRTEX5_PPC440MC_ARB_MODE 0
#define XPAR_PPC440_VIRTEX5_PPC440MC_MAX_BURST 8
#define XPAR_PPC440_VIRTEX5_MPLB_AWIDTH 32
#define XPAR_PPC440_VIRTEX5_MPLB_DWIDTH 128
#define XPAR_PPC440_VIRTEX5_MPLB_NATIVE_DWIDTH 128
#define XPAR_PPC440_VIRTEX5_MPLB_COUNTER 0x00000500
#define XPAR_PPC440_VIRTEX5_MPLB_PRIO_ICU 4
#define XPAR_PPC440_VIRTEX5_MPLB_PRIO_DCUW 3
#define XPAR_PPC440_VIRTEX5_MPLB_PRIO_DCUR 2
#define XPAR_PPC440_VIRTEX5_MPLB_PRIO_SPLB1 0
#define XPAR_PPC440_VIRTEX5_MPLB_PRIO_SPLB0 1
#define XPAR_PPC440_VIRTEX5_MPLB_ARB_MODE 0
#define XPAR_PPC440_VIRTEX5_MPLB_SYNC_TATTRIBUTE 0
#define XPAR_PPC440_VIRTEX5_MPLB_MAX_BURST 8
#define XPAR_PPC440_VIRTEX5_MPLB_ALLOW_LOCK_XFER 1
#define XPAR_PPC440_VIRTEX5_MPLB_READ_PIPE_ENABLE 1
#define XPAR_PPC440_VIRTEX5_MPLB_WRITE_PIPE_ENABLE 1
#define XPAR_PPC440_VIRTEX5_MPLB_WRITE_POST_ENABLE 1
#define XPAR_PPC440_VIRTEX5_MPLB_P2P 0
#define XPAR_PPC440_VIRTEX5_MPLB_WDOG_ENABLE 1
#define XPAR_PPC440_VIRTEX5_SPLB0_AWIDTH 32
#define XPAR_PPC440_VIRTEX5_SPLB0_DWIDTH 128
#define XPAR_PPC440_VIRTEX5_SPLB0_NATIVE_DWIDTH 128
#define XPAR_PPC440_VIRTEX5_SPLB0_SUPPORT_BURSTS 1
#define XPAR_PPC440_VIRTEX5_SPLB0_USE_MPLB_ADDR 1
#define XPAR_PPC440_VIRTEX5_SPLB0_NUM_MPLB_ADDR_RNG 1
#define XPAR_PPC440_VIRTEX5_SPLB0_RNG_MC_BASEADDR 0x00000000
#define XPAR_PPC440_VIRTEX5_SPLB0_RNG_MC_HIGHADDR 0x0FFFFFFF
#define XPAR_PPC440_VIRTEX5_SPLB0_RNG0_MPLB_BASEADDR 0xFFFFFFFF
#define XPAR_PPC440_VIRTEX5_SPLB0_RNG0_MPLB_HIGHADDR 0x00000000
#define XPAR_PPC440_VIRTEX5_SPLB0_RNG1_MPLB_BASEADDR 0xFFFFFFFF
#define XPAR_PPC440_VIRTEX5_SPLB0_RNG1_MPLB_HIGHADDR 0x00000000
#define XPAR_PPC440_VIRTEX5_SPLB0_RNG2_MPLB_BASEADDR 0xFFFFFFFF
#define XPAR_PPC440_VIRTEX5_SPLB0_RNG2_MPLB_HIGHADDR 0x00000000
#define XPAR_PPC440_VIRTEX5_SPLB0_RNG3_MPLB_BASEADDR 0xFFFFFFFF
#define XPAR_PPC440_VIRTEX5_SPLB0_RNG3_MPLB_HIGHADDR 0x00000000
#define XPAR_PPC440_VIRTEX5_SPLB0_NUM_MASTERS 3
#define XPAR_PPC440_VIRTEX5_SPLB0_MID_WIDTH 2
#define XPAR_PPC440_VIRTEX5_SPLB0_ALLOW_LOCK_XFER 1
#define XPAR_PPC440_VIRTEX5_SPLB0_READ_PIPE_ENABLE 1
#define XPAR_PPC440_VIRTEX5_SPLB0_PROPAGATE_MIRQ 0
#define XPAR_PPC440_VIRTEX5_SPLB0_P2P 0
#define XPAR_PPC440_VIRTEX5_SPLB1_AWIDTH 32
#define XPAR_PPC440_VIRTEX5_SPLB1_DWIDTH 128
#define XPAR_PPC440_VIRTEX5_SPLB1_NATIVE_DWIDTH 128
#define XPAR_PPC440_VIRTEX5_SPLB1_SUPPORT_BURSTS 1
#define XPAR_PPC440_VIRTEX5_SPLB1_USE_MPLB_ADDR 0
#define XPAR_PPC440_VIRTEX5_SPLB1_NUM_MPLB_ADDR_RNG 0
#define XPAR_PPC440_VIRTEX5_SPLB1_RNG_MC_BASEADDR 0xFFFFFFFF
#define XPAR_PPC440_VIRTEX5_SPLB1_RNG_MC_HIGHADDR 0x00000000
#define XPAR_PPC440_VIRTEX5_SPLB1_RNG0_MPLB_BASEADDR 0xFFFFFFFF
#define XPAR_PPC440_VIRTEX5_SPLB1_RNG0_MPLB_HIGHADDR 0x00000000
#define XPAR_PPC440_VIRTEX5_SPLB1_RNG1_MPLB_BASEADDR 0xFFFFFFFF
#define XPAR_PPC440_VIRTEX5_SPLB1_RNG1_MPLB_HIGHADDR 0x00000000
#define XPAR_PPC440_VIRTEX5_SPLB1_RNG2_MPLB_BASEADDR 0xFFFFFFFF
#define XPAR_PPC440_VIRTEX5_SPLB1_RNG2_MPLB_HIGHADDR 0x00000000
#define XPAR_PPC440_VIRTEX5_SPLB1_RNG3_MPLB_BASEADDR 0xFFFFFFFF
#define XPAR_PPC440_VIRTEX5_SPLB1_RNG3_MPLB_HIGHADDR 0x00000000
#define XPAR_PPC440_VIRTEX5_SPLB1_NUM_MASTERS 1
#define XPAR_PPC440_VIRTEX5_SPLB1_MID_WIDTH 1
#define XPAR_PPC440_VIRTEX5_SPLB1_ALLOW_LOCK_XFER 1
#define XPAR_PPC440_VIRTEX5_SPLB1_READ_PIPE_ENABLE 1
#define XPAR_PPC440_VIRTEX5_SPLB1_PROPAGATE_MIRQ 0
#define XPAR_PPC440_VIRTEX5_SPLB1_P2P -1
#define XPAR_PPC440_VIRTEX5_NUM_DMA 1
#define XPAR_PPC440_VIRTEX5_DMA0_TXCHANNELCTRL 0x01010000
#define XPAR_PPC440_VIRTEX5_DMA0_RXCHANNELCTRL 0x01010000
#define XPAR_PPC440_VIRTEX5_DMA0_CONTROL 0b00000000
#define XPAR_PPC440_VIRTEX5_DMA0_TXIRQTIMER 0b1111111111
#define XPAR_PPC440_VIRTEX5_DMA0_RXIRQTIMER 0b1111111111
#define XPAR_PPC440_VIRTEX5_DMA1_TXCHANNELCTRL 0x01010000
#define XPAR_PPC440_VIRTEX5_DMA1_RXCHANNELCTRL 0x01010000
#define XPAR_PPC440_VIRTEX5_DMA1_CONTROL 0b00000000
#define XPAR_PPC440_VIRTEX5_DMA1_TXIRQTIMER 0b1111111111
#define XPAR_PPC440_VIRTEX5_DMA1_RXIRQTIMER 0b1111111111
#define XPAR_PPC440_VIRTEX5_DMA2_TXCHANNELCTRL 0x01010000
#define XPAR_PPC440_VIRTEX5_DMA2_RXCHANNELCTRL 0x01010000
#define XPAR_PPC440_VIRTEX5_DMA2_CONTROL 0b00000000
#define XPAR_PPC440_VIRTEX5_DMA2_TXIRQTIMER 0b1111111111
#define XPAR_PPC440_VIRTEX5_DMA2_RXIRQTIMER 0b1111111111
#define XPAR_PPC440_VIRTEX5_DMA3_TXCHANNELCTRL 0x01010000
#define XPAR_PPC440_VIRTEX5_DMA3_RXCHANNELCTRL 0x01010000
#define XPAR_PPC440_VIRTEX5_DMA3_CONTROL 0b00000000
#define XPAR_PPC440_VIRTEX5_DMA3_TXIRQTIMER 0b1111111111
#define XPAR_PPC440_VIRTEX5_DMA3_RXIRQTIMER 0b1111111111
#define XPAR_PPC440_VIRTEX5_DCR_AUTOLOCK_ENABLE 1
#define XPAR_PPC440_VIRTEX5_PPCDM_ASYNCMODE 0
#define XPAR_PPC440_VIRTEX5_PPCDS_ASYNCMODE 0
#define XPAR_PPC440_VIRTEX5_GENERATE_PLB_TIMESPECS 1
#define XPAR_PPC440_VIRTEX5_HW_VER "1.01.a"

/******************************************************************/

