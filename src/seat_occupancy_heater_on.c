
#include "seat_occupancy_heater_on.h"

void seat_occ_heater_on(){

    init_ip_and_op();

    if(PINB & ( 1 << SWITCH1 )){
            if(PINB & ( 1 << SWITCH2 )){
                PORTB |= ( 1 << LED );
            }
            else{
                PORTB &= ~( 1 << LED );
            }
        }

        else{
            PORTB &= ~( 1 << LED );
        }

}

void init_ip_and_op(){

    DDRB &= ~( 1 << SWITCH1 );
    DDRB &= ~( 1 << SWITCH2 );
    DDRB |=  ( 1 << LED );
}
