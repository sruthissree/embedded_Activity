/*
 */

#include <avr/io.h>
#include <util/delay.h>
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
