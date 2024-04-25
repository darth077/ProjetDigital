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
#include "project.h"
#include "time.h"
//#include "photo.c"

//Variables
uint32_t adc_val;
uint32_t adcp;
char rxData;
clock_t start_clock;
int score;

// Fonctions
int photores();
void jump();
void duck();
void score_start();
void sw();
void keyboard();
void led();
void LCD_message();
void audio_out();
void serial_port();

CY_ISR(zayd){
    uint8 status = 0;
    do{
        // Checks if no UART Rx errors
        status = UART_ReadRxStatus();
        if ((status & UART_RX_STS_PAR_ERROR) || (status & UART_RX_STS_STOP_ERROR) || (status & UART_RX_STS_BREAK) || (status & UART_RX_STS_OVERRUN) ) {
            // Parity, framing, break or overrun error
            // ... process error
            LCD_Position(1,0);
            LCD_PrintString("UART err");
        }
        // Check that rx buffer is not empty and get rx data
        if ( (status & UART_RX_STS_FIFO_NOTEMPTY) != 0){
            rxData = UART_ReadRxData();
            UART_PutChar(rxData);
            if (rxData == 'j'){
                jump();
            }
            else if(rxData == 'd'){
                duck();
            }
            
            
        }
    }while ((status & UART_RX_STS_FIFO_NOTEMPTY) != 0);
}
CY_ISR(sw3){
    //score();
    score_start(1);
    SW3_ClearInterrupt();
}


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    ADC_Start();
    LCD_Start();
    Mux_Start();
    uint16 pwm_period = 48000;
    PWM_WritePeriod(pwm_period);
    PWM_WriteCompare(0);
    PWM_Start();
    PWM_1_WritePeriod(pwm_period);
    PWM_1_WriteCompare(0);
    PWM_1_Start();
    UART_Start();
    isr_uart_StartEx(zayd);
    isr_sw3_StartEx(sw3);
    
    for(;;)
    {
        //LCD_ClearDisplay();
        //LCD_PrintNumber(12);
        /* Place your application code here. */
        //photores(0);
        //photores(1);
        //jump();
        //CyDelay(500);
        //duck();
        sw();
        score_start(2);
        
    }
}
int photores(int port){
    int val = 0;
    Mux_Select(port);
    ADC_StartConvert();
        if(ADC_IsEndConversion(ADC_WAIT_FOR_RESULT)!=0){
            adc_val = ADC_GetResult32();
            adcp=(adc_val*5000/(0xFFFF));
        };
        if (adcp<1500){
            val=1;
        }else val = 0;
        
        LCD_ClearDisplay();
        LCD_Position(port,0);
        LCD_PrintNumber(val);
        CyDelay(50);
        
    return val;

}

void jump(void){
    UART_PutString("Jump\n");
    LED1_Write(0);
    LED2_Write(0);
    LED3_Write(1);
    LED4_Write(1);
    LCD_Position(0,0);
    LCD_PrintString("Jump");
    PWM_WriteCompare(4450); //down
    CyDelay(100);
    PWM_WriteCompare(4800); // up
    LCD_ClearDisplay();
    
    
}

void duck(void){
    UART_PutString("Duck");
    LED1_Write(1);
    LED2_Write(1);
    LED3_Write(0);
    LED4_Write(0);
    LCD_Position(0,0);
    LCD_PrintString("Duck");
    PWM_1_WriteCompare(4280); //down
    CyDelay(100);
    PWM_1_WriteCompare(4800); // up
    LCD_Position(0,0);
    LCD_ClearDisplay();
    
    
}

void sw(){
    if (SW1_Read() ==1){
        jump();
    }
    else if (SW2_Read() ==1){
        duck();
    } 
}

void score_start(int arg){
    if (arg == 1){
        start_clock = clock();
        score = 0;
    }
    else if (arg == 2){
        clock_t end_clock = clock();
        int a = (int)(end_clock - start_clock)/CLOCKS_PER_SEC ;
        if (a >= 10) {score += 10;};
        LCD_ClearDisplay();
        LCD_Position(1,0);
        LCD_PrintNumber(score);
    }
}

/* [] END OF FILE */
