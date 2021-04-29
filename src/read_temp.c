#include "read_temp.h"

void initialise_ADC(){
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN) | (7<<ADPS0);
}

uint16_t get_digital_value(uint8_t ch){
    ADMUX &= 0xf8;
    ch &= 0b00000111;
    ADMUX |= ch;
    ADCSRA |= (1<<ADSC);
    while(!(ADCSRA & (1 << ADIF)));
    ADCSRA |= (1 << ADIF);
    return (ADC);
}

uint16_t read_temperature(){
    uint16_t digital_value=0;
    initialise_ADC();
    digital_value = get_digital_value(0);
    _delay_ms(200);

    return digital_value;
}
