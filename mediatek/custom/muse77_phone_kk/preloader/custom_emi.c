#include "mt6577_emi.h"

#define NUM_EMI_RECORD (1)

int num_of_emi_records = NUM_EMI_RECORD;

EMI_SETTINGS emi_settings[] =
{
    {
        0x0001,            //MCP(NAND+DDR1)
        {0xAD, 0xBC, 0x90, 0x55, 0x54},      // HYNIX
        0x0002202E,        //CONA
        0x88008800,        //DRVCTL0
        0x88008800,        //DRVCTL1
        0x00000005,        //DLE
        0x22824154,        //ACTIM
        0x00000000,        //GDDR3CTL
        0xF0040560,        //CONF1
        0x8283405C,        //DDR2CTL
        0x9F068CA0,        //TEST2_3
        0x00403361,        //CONF2
        0x11642842,        //PD_CTRL
        0x00000000,        //PADCTL3
        0x00000000,        //DQODLY
        0x00000000,        //ADDRODLY
        0x00000000,        //CLKODLY
	.reserved = {[0 ... 9] = 0},
        0x00000032,        //MODE_REG
        0x00000020,        //EXT_MODE_REG
    },
};

