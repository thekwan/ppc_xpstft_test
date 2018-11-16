/*
 * Copyright (c) 2009 Xilinx, Inc.  All rights reserved.
 *
 * Xilinx, Inc.
 * XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS" AS A
 * COURTESY TO YOU.  BY PROVIDING THIS DESIGN, CODE, OR INFORMATION AS
 * ONE POSSIBLE   IMPLEMENTATION OF THIS FEATURE, APPLICATION OR
 * STANDARD, XILINX IS MAKING NO REPRESENTATION THAT THIS IMPLEMENTATION
 * IS FREE FROM ANY CLAIMS OF INFRINGEMENT, AND YOU ARE RESPONSIBLE
 * FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE FOR YOUR IMPLEMENTATION.
 * XILINX EXPRESSLY DISCLAIMS ANY WARRANTY WHATSOEVER WITH RESPECT TO
 * THE ADEQUACY OF THE IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO
 * ANY WARRANTIES OR REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE
 * FROM CLAIMS OF INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

/*
 * helloworld.c: simple test application
 */

#include <stdio.h>
#include "platform.h"
#include "ov7670_eval_camera.h"
#include "sccb.h"
#include "xpstft.h"
#include "dcmi.h"

#define OV7670_DEV_SLAVE_ADDR 0x42

void print(char *str);

int main()
{
	u8 reg;
    init_platform();

#if 0
    print("*****************************************\n\r");
    print("* SCCB protocol Test Program            *\n\r");
	sccb_reset( OV7670_DEV_SLAVE_ADDR );
	//sccb_write_reg( 0xb4 , 0x5a );
	reg = sccb_read_reg( 0x11 );
    print(" Reg[0x11] = 0x");
	putnum( reg );
    print("\n\r");

	sccb_write_reg(0x11, 0x01);

	reg = sccb_read_reg( 0x11 );
    print(" Reg[0x11] = 0x");
	putnum( reg );
    print("\n\r");
    print("*****************************************\n\r");
#else
#if 1
	xpstft_example();
#endif

#if 1
	print("OV7670 Camera sensor init\r\n");
	sccb_reset( OV7670_DEV_SLAVE_ADDR );
	ov7670_init();
#endif

#if 1
	print("DCMI logic init\r\n");
	dcmi_ip_reset();
	dcmi_ip_set_addr( XPS_TFT_0_VIDEO_MEMORY_ADDR );
	dcmi_ip_set_byte_en_reg( 0x00ff );
	dcmi_ip_oper_enable(1);
#endif
#endif

    cleanup_platform();


    return 0;
}
