#include <xc.h>
#include "mcc_generated_files/system/system.h"


// Define system frequency for delays if needed
#define _XTAL_FREQ 64000000

void main(void)
{
    TMR2_Initialize();
    PWM3_Initialize();

    TMR2_Start();
    PWM3_LoadDutyValue(200);

    while (1) {}
}