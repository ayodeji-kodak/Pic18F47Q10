#include <xc.h>
#include "mcc_generated_files/system/system.h"


void main(void)
{
    SYSTEM_Initialize();     // Initialize peripherals from MCC

    TMR2_Start();            // Start Timer2
    PWM3_LoadDutyValue(100); // Hardware PWM on RA4 (?78% duty)

    while (1)
    {
    }
}
