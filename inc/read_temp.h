#ifndef READ_TEMP_H_INCLUDED
#define READ_TEMP_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

uint16_t read_temperature();

uint16_t get_digital_value(uint8_t);

void initialise_ADC();

#endif // READ_TEMP_H_INCLUDED