#include "mcc_generated_files/system/system.h"

volatile bool resetSequence = false; // Flag set by INT1 ISR to reset sequence

// Interrupt Service Routine
void __interrupt() ISR() {
    if (INTERRUPT_InterruptFlag(INTERRUPT_INT1)) {
        resetSequence = true; // Signal the main loop to reset
        INTERRUPT_InterruptFlagClear(INTERRUPT_INT1); // Clear the interrupt flag
    }
}

// Helper function to turn off all LEDs
void resetAllLEDs() {
    led1_SetLow();
    led2_SetLow();
    led3_SetLow();
    led4_SetLow();
}

// Helper macro to simplify step and reset checks
#define STEP(action)       \
    do {                   \
        action;            \
        if (resetSequence) \
            goto reset;    \
    } while(0)

int main(void) {
    SYSTEM_Initialize();

    // Enable global and peripheral interrupts
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    while (1) {
        if (s2_PORT == 0) { // First button pressed (active low)
            resetSequence = false;

            // Step 1
            STEP(led1_SetHigh(); __delay_ms(1000));
            STEP(led1_SetLow(); __delay_ms(1000));

            // Step 2
            STEP(led2_SetHigh(); __delay_ms(1000));
            STEP(led2_SetLow(); __delay_ms(1000));

            // Step 3
            STEP(led1_SetHigh(); led2_SetHigh(); __delay_ms(1000));
            STEP(led1_SetLow(); led2_SetLow(); __delay_ms(1000));

            // Step 4
            STEP(led3_SetHigh(); __delay_ms(1000));
            STEP(led3_SetLow(); __delay_ms(1000));

            // Step 5
            STEP(led3_SetHigh(); led1_SetHigh(); __delay_ms(1000));
            STEP(led3_SetLow(); led1_SetLow(); __delay_ms(1000));

            // Step 6
            STEP(led3_SetHigh(); led2_SetHigh(); __delay_ms(1000));
            STEP(led3_SetLow(); led2_SetLow(); __delay_ms(1000));

            // Step 7
            STEP(led3_SetHigh(); led2_SetHigh(); led1_SetHigh(); __delay_ms(1000));
            STEP(led3_SetLow(); led2_SetLow(); led1_SetLow(); __delay_ms(1000));

            // Step 8
            STEP(led4_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); __delay_ms(1000));

            // Step 9
            STEP(led4_SetHigh(); led1_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led1_SetLow(); __delay_ms(1000));

            // Step 10
            STEP(led4_SetHigh(); led2_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led2_SetLow(); __delay_ms(1000));

            // Step 11
            STEP(led4_SetHigh(); led2_SetHigh(); led1_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led2_SetLow(); led1_SetLow(); __delay_ms(1000));

            // Step 12
            STEP(led4_SetHigh(); led3_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led3_SetLow(); __delay_ms(1000));

            // Step 13
            STEP(led4_SetHigh(); led3_SetHigh(); led1_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led3_SetLow(); led1_SetLow(); __delay_ms(1000));

            // Step 14
            STEP(led4_SetHigh(); led3_SetHigh(); led2_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led3_SetLow(); led2_SetLow(); __delay_ms(1000));

            // Step 15
            STEP(led4_SetHigh(); led3_SetHigh(); led2_SetHigh(); led1_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led3_SetLow(); led2_SetLow(); led1_SetLow(); __delay_ms(1000));
        }

    reset:
        resetAllLEDs(); // Turn off all LEDs when reset is triggered
    }
}
