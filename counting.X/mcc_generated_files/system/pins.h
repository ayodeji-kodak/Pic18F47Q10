/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA4 aliases
#define led1_TRIS                 TRISAbits.TRISA4
#define led1_LAT                  LATAbits.LATA4
#define led1_PORT                 PORTAbits.RA4
#define led1_WPU                  WPUAbits.WPUA4
#define led1_OD                   ODCONAbits.ODCA4
#define led1_ANS                  ANSELAbits.ANSELA4
#define led1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define led1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define led1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define led1_GetValue()           PORTAbits.RA4
#define led1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define led1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define led1_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define led1_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define led1_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define led1_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define led1_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define led1_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RA5 aliases
#define led2_TRIS                 TRISAbits.TRISA5
#define led2_LAT                  LATAbits.LATA5
#define led2_PORT                 PORTAbits.RA5
#define led2_WPU                  WPUAbits.WPUA5
#define led2_OD                   ODCONAbits.ODCA5
#define led2_ANS                  ANSELAbits.ANSELA5
#define led2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define led2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define led2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define led2_GetValue()           PORTAbits.RA5
#define led2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define led2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define led2_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define led2_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define led2_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define led2_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define led2_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define led2_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RA6 aliases
#define led3_TRIS                 TRISAbits.TRISA6
#define led3_LAT                  LATAbits.LATA6
#define led3_PORT                 PORTAbits.RA6
#define led3_WPU                  WPUAbits.WPUA6
#define led3_OD                   ODCONAbits.ODCA6
#define led3_ANS                  ANSELAbits.ANSELA6
#define led3_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define led3_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define led3_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define led3_GetValue()           PORTAbits.RA6
#define led3_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define led3_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define led3_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define led3_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define led3_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define led3_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define led3_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define led3_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set RA7 aliases
#define led4_TRIS                 TRISAbits.TRISA7
#define led4_LAT                  LATAbits.LATA7
#define led4_PORT                 PORTAbits.RA7
#define led4_WPU                  WPUAbits.WPUA7
#define led4_OD                   ODCONAbits.ODCA7
#define led4_ANS                  ANSELAbits.ANSELA7
#define led4_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define led4_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define led4_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define led4_GetValue()           PORTAbits.RA7
#define led4_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define led4_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define led4_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define led4_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define led4_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define led4_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define led4_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define led4_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RB4 aliases
#define s1_TRIS                 TRISBbits.TRISB4
#define s1_LAT                  LATBbits.LATB4
#define s1_PORT                 PORTBbits.RB4
#define s1_WPU                  WPUBbits.WPUB4
#define s1_OD                   ODCONBbits.ODCB4
#define s1_ANS                  ANSELBbits.ANSELB4
#define s1_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define s1_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define s1_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define s1_GetValue()           PORTBbits.RB4
#define s1_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define s1_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define s1_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define s1_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define s1_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define s1_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define s1_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define s1_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RC5 aliases
#define s2_TRIS                 TRISCbits.TRISC5
#define s2_LAT                  LATCbits.LATC5
#define s2_PORT                 PORTCbits.RC5
#define s2_WPU                  WPUCbits.WPUC5
#define s2_OD                   ODCONCbits.ODCC5
#define s2_ANS                  ANSELCbits.ANSELC5
#define s2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define s2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define s2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define s2_GetValue()           PORTCbits.RC5
#define s2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define s2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define s2_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define s2_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define s2_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define s2_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define s2_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define s2_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/