/**
 * @file seat_occupancy_heater_on.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief source file to turn the heater ON if the seat is occupied and heater SWITCH is pressed
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "seat_occupancy_heater_on.h"

/**
 * @brief funtion to initialise ports for input switches and output LED
 * 
 */
void init_ip_and_op(){

    DDRB &= ~( 1 << SWITCH1 );
    DDRD &= ~( 1 << SWITCH2 );
    DDRB |=  ( 1 << LED );
}

/**
 * @brief function to switch ON the heater
 * 
 * @return uint8_t 
 */
uint8_t seat_occ_heater_on(){

    init_ip_and_op();

    if(PINB & ( 1 << SWITCH1 )){
            if(PIND & ( 1 << SWITCH2 )){
                PORTB |= ( 1 << LED );
                return 1;
            }
            else{
                PORTB &= ~( 1 << LED );
                return 0;
            }
        }

        else{
            PORTB &= ~( 1 << LED );
            return 0;
        }

}


