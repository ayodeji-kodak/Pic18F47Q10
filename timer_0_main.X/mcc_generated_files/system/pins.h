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
� [2025] Microchip Technology Inc. and its subsidiaries.

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
#define LED4_TRIS                 TRISAbits.TRISA4
#define LED4_LAT                  LATAbits.LATA4
#define LED4_PORT                 PORTAbits.RA4
#define LED4_WPU                  WPUAbits.WPUA4
#define LED4_OD                   ODCONAbits.ODCA4
#define LED4_ANS                  ANSELAbits.ANSELA4
#define LED4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED4_GetValue()           PORTAbits.RA4
#define LED4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED4_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define LED4_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

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