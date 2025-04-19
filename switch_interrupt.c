#include "mcc_generated_files/system/system.h"

volatile bool switchInterruptTriggered = false;

// Interrupt Service Routine
void __interrupt() ISR() {
    if (INTERRUPT_InterruptFlag(INTERRUPT_INT0)) {
        switchInterruptTriggered = true;
        INTERRUPT_InterruptFlagClear(INTERRUPT_INT0); // Clear interrupt flag
    }
}

// Fun and simplified LED sequence
void runLEDSequence(void) {
    // Startup flash: All LEDs blink together
    for (int i = 0; i < 3; i++) {
        led1_SetHigh(); led2_SetHigh(); led3_SetHigh(); led4_SetHigh();
        __delay_ms(200);
        led1_SetLow(); led2_SetLow(); led3_SetLow(); led4_SetLow();
        __delay_ms(200);
    }

    // LED chase forward
    led1_SetHigh(); __delay_ms(150); led1_SetLow();
    led2_SetHigh(); __delay_ms(150); led2_SetLow();
    led3_SetHigh(); __delay_ms(150); led3_SetLow();
    led4_SetHigh(); __delay_ms(150); led4_SetLow();

    // LED chase backward
    led4_SetHigh(); __delay_ms(150); led4_SetLow();
    led3_SetHigh(); __delay_ms(150); led3_SetLow();
    led2_SetHigh(); __delay_ms(150); led2_SetLow();
    led1_SetHigh(); __delay_ms(150); led1_SetLow();

    // Alternate flashing (odd vs even)
    for (int i = 0; i < 3; i++) {
        led1_SetHigh(); led3_SetHigh();
        __delay_ms(250);
        led1_SetLow(); led3_SetLow();

        led2_SetHigh(); led4_SetHigh();
        __delay_ms(250);
        led2_SetLow(); led4_SetLow();
    }

    // Build-up and fade-out
    led1_SetHigh(); __delay_ms(100);
    led2_SetHigh(); __delay_ms(100);
    led3_SetHigh(); __delay_ms(100);
    led4_SetHigh(); __delay_ms(300);

    led1_SetLow(); __delay_ms(100);
    led2_SetLow(); __delay_ms(100);
    led3_SetLow(); __delay_ms(100);
    led4_SetLow(); __delay_ms(300);
}

int main(void) {
    // Initialize system
    SYSTEM_Initialize();

    // Enable global and peripheral interrupts
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    // Main loop
    while (1) {
        if (switchInterruptTriggered) {
            switchInterruptTriggered = false;
            runLEDSequence();  // Run LED pattern when interrupt triggered
        }
    }
}
