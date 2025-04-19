#include "mcc_generated_files/system/system.h"

/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();

    while (1)
    {
        if (s2_PORT == 0) // If switch is pressed
        {
            // LED1: 25% brightness
            PWM1_LoadDutyValue(255 * 0.25); // 25% duty cycle
            // LED2: 50% brightness
            PWM2_LoadDutyValue(255 * 0.50); // 50% duty cycle
            // LED3: 75% brightness
            PWM3_LoadDutyValue(255 * 0.75); // 75% duty cycle
            // LED4: 100% brightness (fully ON)
            PWM4_LoadDutyValue(255);        // 100% duty cycle

            // Keep them on with respective brightness for 3 seconds
            __delay_ms(3000);

            // Turn off all LEDs (0% duty cycle)
            PWM1_LoadDutyValue(0);
            PWM2_LoadDutyValue(0);
            PWM3_LoadDutyValue(0);
            PWM4_LoadDutyValue(0);

            __delay_ms(2000); // Wait before repeating
        }
    }
}
