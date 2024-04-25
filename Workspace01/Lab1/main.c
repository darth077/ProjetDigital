/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "stdio.h"
#include "project.h"
#include "keypad.h"

char numb;
uint32_t adc_val;
uint32_t adcp;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD_Start();
    keypadInit();
    ADC_Start();
    for(;;)
    {
        //Photo
        ADC_StartConvert() ;
        if(ADC_IsEndConversion(ADC_WAIT_FOR_RESULT)!=0){
            adc_val = ADC_GetResult32();
            adcp=(adc_val*5000/(0xFFFF));
        };
        LCD_Position(0,0);
        LCD_ClearDisplay();
        LCD_PrintNumber(adcp);
        CyDelay(50);
        
        
        
        
        //ADC
        /*ADC_StartConvert();
        if(ADC_IsEndConversion(ADC_WAIT_FOR_RESULT)!=0){
            adc_val = ADC_GetResult32();
            adcp=(adc_val*5000/(0xFFFF));
        };
        if(SW1_Read()){
            LCD_ClearDisplay();
        }
        
        LCD_Position(0,0);
        LCD_ClearDisplay();
        LCD_PrintNumber(adcp);
        CyDelay(50);
        if(adcp <1000){
            LED1_Write(1);LED2_Write(0);LED3_Write(0);LED4_Write(0);
        }
        if(1000<=adcp && adcp<2000){
            LED2_Write(1);LED1_Write(0);LED3_Write(0);LED4_Write(0);
        }
        if(2000<=adcp && adcp<3000){
            LED3_Write(1);LED1_Write(0);LED2_Write(0);LED4_Write(0);
        }
        if(3000<=adcp && adcp<4000){
            LED4_Write(1);LED1_Write(0);LED2_Write(0);LED3_Write(0);
        }*/
        
        
        
        /*Keypad
        if(SW1_Read()){
            LCD_ClearDisplay();
        }
        CyDelay(100);
        numb = keypadScan();
        if (numb != 'z'){
            //LCD_Position(0,1);
            LCD_PutChar(numb);
        }*/
        
        
        /*LED
        if (SW2_Read()){
            LED1_Write(1);
            CyDelay(100);
            LED2_Write(1);
            CyDelay(100);
            LED3_Write(1);
            CyDelay(100);
            LED4_Write(1);
            CyDelay(100);
        }
        else{
            LED4_Write(0);
            CyDelay(100);
            LED3_Write(0);
            CyDelay(100);
            LED2_Write(0);
            CyDelay(100);
            LED1_Write(0);
            CyDelay(100);
        }*/
         /*LCD*/   
        /*LCD_ClearDisplay();*/           
        /*LCD_Position(0,1);
        LCD_PutChar('C');
        LCD_Position(1,7);
        LCD_PrintNumber(2);
            
            
        
        if(SW2_Read()){
            LCD_ClearDisplay();
        }*/
            
    }
}

/* [] END OF FILE */
