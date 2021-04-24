/**
 * @file main.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief program to switch ON LED if Seat is occupied and heater turned on
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Activity_1_header.h"

int main(void)
{
    DDRB &= ~(1<<PINB0);
    DDRB &= ~(1<<PINB1);
    DDRB |=  (1<<PINB2);

    while(1)
    {
        if(PINB & (1<<PINB0)){
            if(PINB & (1<<PINB1)){
                PORTB |= (1<<PINB2);
            }
            else{
                PORTB &= ~(1<<PINB2);
            }
        }

        else{
            PORTB &= ~(1<<PINB2);
        }
        _delay_ms(1000);
    }

    return 0;
}
