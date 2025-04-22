#include "mcc_generated_files/system/system.h"

// Global flag for reset sequence
volatile bool resetSequence = false;

// Helper to turn off all LEDs
void resetAllLEDs(void) {
    led1_SetLow();
    led2_SetLow();
    led3_SetLow();
    led4_SetLow();
}

// Macro for LED step execution with reset check
#define STEP(action)       \
    do {                   \
        action;            \
        if (resetSequence) \
            goto start;    \
    } while(0)

// === Custom Interrupt Handler for S1 (RB4) ===
void S1_CustomInterruptHandler(void) {
    resetSequence = true;  // Signal to restart the sequence
}

int main(void)
{
    // Initialize system (clocks, I/O, peripherals, etc.)
    SYSTEM_Initialize();

    // Register custom ISR for S1 (RB4)
    s1_SetInterruptHandler(S1_CustomInterruptHandler);

    // Enable global and peripheral interrupts
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    // Main loop
    while (1) {
        // Wait for S2 (RC5) to start the sequence
        if (s2_PORT == 0) {
            while (s2_PORT == 0); // Wait for release (basic debounce)

        start:
            resetSequence = false;
            resetAllLEDs();

            // LED Sequence
            STEP(led1_SetHigh(); __delay_ms(1000));
            STEP(led1_SetLow(); __delay_ms(1000));
            STEP(led2_SetHigh(); __delay_ms(1000));
            STEP(led2_SetLow(); __delay_ms(1000));
            STEP(led1_SetHigh(); led2_SetHigh(); __delay_ms(1000));
            STEP(led1_SetLow(); led2_SetLow(); __delay_ms(1000));
            STEP(led3_SetHigh(); __delay_ms(1000));
            STEP(led3_SetLow(); __delay_ms(1000));
            STEP(led3_SetHigh(); led1_SetHigh(); __delay_ms(1000));
            STEP(led3_SetLow(); led1_SetLow(); __delay_ms(1000));
            STEP(led3_SetHigh(); led2_SetHigh(); __delay_ms(1000));
            STEP(led3_SetLow(); led2_SetLow(); __delay_ms(1000));
            STEP(led3_SetHigh(); led2_SetHigh(); led1_SetHigh(); __delay_ms(1000));
            STEP(led3_SetLow(); led2_SetLow(); led1_SetLow(); __delay_ms(1000));
            STEP(led4_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); __delay_ms(1000));
            STEP(led4_SetHigh(); led1_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led1_SetLow(); __delay_ms(1000));
            STEP(led4_SetHigh(); led2_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led2_SetLow(); __delay_ms(1000));
            STEP(led4_SetHigh(); led2_SetHigh(); led1_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led2_SetLow(); led1_SetLow(); __delay_ms(1000));
            STEP(led4_SetHigh(); led3_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led3_SetLow(); __delay_ms(1000));
            STEP(led4_SetHigh(); led3_SetHigh(); led1_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led3_SetLow(); led1_SetLow(); __delay_ms(1000));
            STEP(led4_SetHigh(); led3_SetHigh(); led2_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led3_SetLow(); led2_SetLow(); __delay_ms(1000));
            STEP(led4_SetHigh(); led3_SetHigh(); led2_SetHigh(); led1_SetHigh(); __delay_ms(1000));
            STEP(led4_SetLow(); led3_SetLow(); led2_SetLow(); led1_SetLow(); __delay_ms(1000));
        }
    }
}
