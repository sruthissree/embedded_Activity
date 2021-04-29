
#include "seat_occupancy_heater_on.h"

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

void init_ip_and_op(){

    DDRB &= ~( 1 << SWITCH1 );
    DDRD &= ~( 1 << SWITCH2 );
    DDRB |=  ( 1 << LED );
}
