 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
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
#include "mcc_generated_files/system/system.h"
/*
    Main application
*/


int main(void)
{
    SYSTEM_Initialize();
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    //INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    // Enable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptEnable(); 

    // Disable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptDisable(); 


    while(1)
    {
    // Check if the switch is pressed (active low)
    if (s2_PORT == 0) {  // Assuming 's2_PORT' is the correct input register
        led1_SetHigh(); //1
        __delay_ms(1000); 
        led1_SetLow(); 
        __delay_ms(1000);
        led2_SetHigh(); //2
        __delay_ms(1000); 
        led2_SetLow();
        __delay_ms(1000);
        led1_SetHigh(); //
        led2_SetHigh(); //3
        __delay_ms(1000); 
        led1_SetLow(); 
        led2_SetLow();
        __delay_ms(1000); 
        led3_SetHigh(); //4
        __delay_ms(1000); 
        led3_SetLow();
        __delay_ms(1000); 
        led3_SetHigh(); //5
        led1_SetHigh();
        __delay_ms(1000); 
        led3_SetLow(); 
        led1_SetLow();
        __delay_ms(1000); 
        led3_SetHigh(); //6
        led2_SetHigh();
        __delay_ms(1000); 
        led3_SetLow(); 
        led2_SetLow();
        __delay_ms(1000);
        led3_SetHigh(); //7
        led2_SetHigh();
        led1_SetHigh();
        __delay_ms(1000);
        led3_SetLow(); 
        led2_SetLow();
        led1_SetLow();
        __delay_ms(1000);
        led4_SetHigh(); //8
        __delay_ms(1000); 
        led4_SetLow();
        __delay_ms(1000); 
        led4_SetHigh();//9
        led1_SetHigh();
        __delay_ms(1000); 
        led4_SetLow();
        led1_SetLow();
        __delay_ms(1000); 
        led4_SetHigh();//9
        led2_SetHigh();
        __delay_ms(1000);  
        led4_SetLow();//10
        led2_SetLow();
        __delay_ms(1000); 
        led4_SetHigh(); //11
        led2_SetHigh();
        led1_SetHigh();
        __delay_ms(1000); 
        led4_SetLow(); 
        led2_SetLow();
        led1_SetLow();
        __delay_ms(1000); 
        led4_SetHigh();//12
        led3_SetHigh();
        __delay_ms(1000);
        led4_SetLow();
        led3_SetLow();
        __delay_ms(1000);
        led4_SetHigh(); //13
        led3_SetHigh();
        led1_SetHigh();
        __delay_ms(1000);
        led4_SetLow(); 
        led3_SetLow();
        led1_SetLow();
        __delay_ms(1000); 
        led4_SetHigh(); //13
        led3_SetHigh();
        led2_SetHigh();
        __delay_ms(1000);
        led4_SetLow(); //14
        led3_SetLow();
        led2_SetLow();
        __delay_ms(1000); 
        led4_SetHigh(); //15
        led3_SetHigh();
        led2_SetHigh();
        led1_SetHigh();
        __delay_ms(1000);
        led4_SetLow(); 
        led3_SetLow();
        led1_SetLow();
        led2_SetLow();
        __delay_ms(1000);
        
        
        
    }
    }
}