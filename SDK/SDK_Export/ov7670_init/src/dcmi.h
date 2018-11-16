#ifndef _DCMI_H_
#define _DCMI_H_

#include "xparameters.h"
#include "xio.h"

/* Definitions for peripheral DCMI_IP_0 */

#define XPAR_DCMI_IP_CTRL_REG (XPAR_DCMI_IP_0_BASEADDR+0x100)
#define XPAR_DCMI_IP_STAT_REG (XPAR_DCMI_IP_0_BASEADDR+0x101)
#define XPAR_DCMI_IP_ADDR_REG (XPAR_DCMI_IP_0_BASEADDR+0x104)
#define XPAR_DCMI_IP_BTEN_REG (XPAR_DCMI_IP_0_BASEADDR+0x108)
#define XPAR_DCMI_IP_SW_RESET (XPAR_DCMI_IP_0_BASEADDR+0x203)

#define WAIT_FOR_DONE  while( XIo_In8(XPAR_DCMI_IP_STAT_REG) & 0x40 )

void dcmi_ip_reset( void );
void dcmi_ip_oper_enable( int clk_polarity);
void dcmi_ip_oper_disable( void );
void dcmi_ip_set_addr( u32 addr );
void dcmi_ip_set_byte_en_reg( u16 reg );

#endif
