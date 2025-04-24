#include "mcc_generated_files/system/system.h"

#define MAX_DUTY 1023  // 10-bit max for PWM
#define STEP     8     // Change per iteration
#define DELAY_MS 10    // Delay between brightness steps

// Set duty cycle for CCP1 and CCP2
void SetPWM(uint16_t duty1, uint16_t duty2) {
    // CCP1 - LED1 & LED3
    CCPR1L = duty1 >> 2;
    CCP1CONbits.DC1B = duty1 & 0x03;

    // CCP2 - LED2 & LED4
    CCPR2L = duty2 >> 2;
    CCP2CONbits.DC2B = duty2 & 0x03;
}

void main(void) {
    // Initialize system, timers, CCPs
    SYSTEM_Initialize();

    // Enable global interrupts (not needed for PWM, but safe)
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    uint16_t brightness = 0;
    int8_t direction = STEP;

    while (1) {
        // Update PWM duty cycles (same breathing effect on both)
        SetPWM(brightness, brightness);

        // Update brightness
        brightness += direction;

        if (brightness >= MAX_DUTY || brightness == 0) {
            direction = -direction;  // Reverse at limits
        }

        __delay_ms(DELAY_MS);
    }
}
