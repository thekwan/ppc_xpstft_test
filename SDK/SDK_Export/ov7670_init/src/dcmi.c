#include "dcmi.h"

/**************************************
 * RESET
 **************************************/
void dcmi_ip_reset( void ) {
	XIo_Out8(XPAR_DCMI_IP_SW_RESET,  0x0A);
}

/**************************************
 * Operating mode set
 **************************************/
void dcmi_ip_oper_enable( int clk_polarity ) {
	WAIT_FOR_DONE;
	if( clk_polarity == 0 )
		XIo_Out8(XPAR_DCMI_IP_CTRL_REG,  0x50);
	else 
		XIo_Out8(XPAR_DCMI_IP_CTRL_REG,  0xd0);
}

void dcmi_ip_oper_disable( void ) {
	WAIT_FOR_DONE;
	XIo_Out8(XPAR_DCMI_IP_CTRL_REG,  0x10);
}


/**************************************
 * Burst operation configs
 **************************************/
void dcmi_ip_set_addr( u32 addr ) {
	WAIT_FOR_DONE;
	XIo_Out32(XPAR_DCMI_IP_ADDR_REG,  addr);
}

void dcmi_ip_set_byte_en_reg( u16 reg ) {
	WAIT_FOR_DONE;
	XIo_Out16(XPAR_DCMI_IP_BTEN_REG, reg );
}

