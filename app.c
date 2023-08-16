/* 
 * File:   app.c
 * Author: Dell
 *
 * Created on 01 Aug, 2023, 04:11 ?
 */
#include "app.h"
#include "C:\Program Files\Microchip\MPLABX\v6.10\packs\Microchip\PIC18Fxxxx_DFP\1.4.151\xc8\pic\include\builtins.h"
void application_initaialize(void);
Std_ReturnType ret = E_NOT_OK;
uint8 hour = 23 , minutes = 59 , seconds = 50;
int main() {
    application_initaialize();
    while(1){
        for(uint8 i = 0; i<50;i++){
            ret = gpio_port_write(PORTD_INDEX,0x01);
            ret = gpio_port_write(PORTC_INDEX,((uint8)(hour/10)));
            __delay_us(3333);
            ret = gpio_port_write(PORTD_INDEX,0x02);
            ret = gpio_port_write(PORTC_INDEX,((uint8)(hour%10)));
            __delay_us(3333);
            ret = gpio_port_write(PORTD_INDEX,0x04);
            ret = gpio_port_write(PORTC_INDEX,((uint8)(minutes/10)));
            __delay_us(3333);
            ret = gpio_port_write(PORTD_INDEX,0x08);
            ret = gpio_port_write(PORTC_INDEX,((uint8)(minutes%10)));
            __delay_us(3333);
            ret = gpio_port_write(PORTD_INDEX,0x10);
            ret = gpio_port_write(PORTC_INDEX,((uint8)(seconds/10)));
            __delay_us(3333);
            ret = gpio_port_write(PORTD_INDEX,0x20);
            ret = gpio_port_write(PORTC_INDEX,((uint8)(seconds%10)));
            __delay_us(3333);
        }
        seconds++;
        if(seconds == 60){
            minutes++;
            seconds = 0;
        }
        if(minutes == 60){
            hour++;
            minutes = 0;
        }
        if(hour == 24){
            hour = 0;
        }
    }
    return (EXIT_SUCCESS);
}

void application_initaialize(void){
    Std_ReturnType ret = E_NOT_OK;
    ret = gpio_port_direction_initialize(PORTC_INDEX,0x00);
    ret = gpio_port_direction_initialize(PORTD_INDEX,0xC0);
}