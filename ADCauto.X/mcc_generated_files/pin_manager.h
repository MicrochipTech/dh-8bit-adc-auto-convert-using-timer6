/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 3.16
        Device            :  PIC16F1619
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.20

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set D5_RA1 aliases
#define D5_RA1_TRIS               TRISA1
#define D5_RA1_LAT                LATA1
#define D5_RA1_PORT               RA1
#define D5_RA1_WPU                WPUA1
#define D5_RA1_ANS                ANSA1
#define D5_RA1_SetHigh()    do { LATA1 = 1; } while(0)
#define D5_RA1_SetLow()   do { LATA1 = 0; } while(0)
#define D5_RA1_Toggle()   do { LATA1 = ~LATA1; } while(0)
#define D5_RA1_GetValue()         PORTAbits.RA1
#define D5_RA1_SetDigitalInput()    do { TRISA1 = 1; } while(0)
#define D5_RA1_SetDigitalOutput()   do { TRISA1 = 0; } while(0)

#define D5_RA1_SetPullup()    do { WPUA1 = 1; } while(0)
#define D5_RA1_ResetPullup()   do { WPUA1 = 0; } while(0)
#define D5_RA1_SetAnalogMode()   do { ANSA1 = 1; } while(0)
#define D5_RA1_SetDigitalMode()   do { ANSA1 = 0; } while(0)


// get/set D6_RA2 aliases
#define D6_RA2_TRIS               TRISA2
#define D6_RA2_LAT                LATA2
#define D6_RA2_PORT               RA2
#define D6_RA2_WPU                WPUA2
#define D6_RA2_ANS                ANSA2
#define D6_RA2_SetHigh()    do { LATA2 = 1; } while(0)
#define D6_RA2_SetLow()   do { LATA2 = 0; } while(0)
#define D6_RA2_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define D6_RA2_GetValue()         PORTAbits.RA2
#define D6_RA2_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define D6_RA2_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define D6_RA2_SetPullup()    do { WPUA2 = 1; } while(0)
#define D6_RA2_ResetPullup()   do { WPUA2 = 0; } while(0)
#define D6_RA2_SetAnalogMode()   do { ANSA2 = 1; } while(0)
#define D6_RA2_SetDigitalMode()   do { ANSA2 = 0; } while(0)


// get/set D4_RA5 aliases
#define D4_RA5_TRIS               TRISA5
#define D4_RA5_LAT                LATA5
#define D4_RA5_PORT               RA5
#define D4_RA5_WPU                WPUA5
#define D4_RA5_SetHigh()    do { LATA5 = 1; } while(0)
#define D4_RA5_SetLow()   do { LATA5 = 0; } while(0)
#define D4_RA5_Toggle()   do { LATA5 = ~LATA5; } while(0)
#define D4_RA5_GetValue()         PORTAbits.RA5
#define D4_RA5_SetDigitalInput()    do { TRISA5 = 1; } while(0)
#define D4_RA5_SetDigitalOutput()   do { TRISA5 = 0; } while(0)

#define D4_RA5_SetPullup()    do { WPUA5 = 1; } while(0)
#define D4_RA5_ResetPullup()   do { WPUA5 = 0; } while(0)


// get/set D4_RA5 aliases
#define D4_RA5_TRIS               TRISA5
#define D4_RA5_LAT                LATA5
#define D4_RA5_PORT               RA5
#define D4_RA5_WPU                WPUA5
#define D4_RA5_SetHigh()    do { LATA5 = 1; } while(0)
#define D4_RA5_SetLow()   do { LATA5 = 0; } while(0)
#define D4_RA5_Toggle()   do { LATA5 = ~LATA5; } while(0)
#define D4_RA5_GetValue()         PORTAbits.RA5
#define D4_RA5_SetDigitalInput()    do { TRISA5 = 1; } while(0)
#define D4_RA5_SetDigitalOutput()   do { TRISA5 = 0; } while(0)

#define D4_RA5_SetPullup()    do { WPUA5 = 1; } while(0)
#define D4_RA5_ResetPullup()   do { WPUA5 = 0; } while(0)


// get/set D7_RC5 aliases
#define D7_RC5_TRIS               TRISC5
#define D7_RC5_LAT                LATC5
#define D7_RC5_PORT               RC5
#define D7_RC5_WPU                WPUC5
#define D7_RC5_SetHigh()    do { LATC5 = 1; } while(0)
#define D7_RC5_SetLow()   do { LATC5 = 0; } while(0)
#define D7_RC5_Toggle()   do { LATC5 = ~LATC5; } while(0)
#define D7_RC5_GetValue()         PORTCbits.RC5
#define D7_RC5_SetDigitalInput()    do { TRISC5 = 1; } while(0)
#define D7_RC5_SetDigitalOutput()   do { TRISC5 = 0; } while(0)

#define D7_RC5_SetPullup()    do { WPUC5 = 1; } while(0)
#define D7_RC5_ResetPullup()   do { WPUC5 = 0; } while(0)



/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);





#endif // PIN_MANAGER_H
/**
 End of File
*/