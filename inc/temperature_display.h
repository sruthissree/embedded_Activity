#ifndef TEMPERATURE_DISPLAY_H_INCLUDED
#define TEMPERATURE_DISPLAY_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

void display_temp(uint8_t);
void USARTInit(uint16_t);
void USARTWriteChar(char);
char int_to_char(char);

#endif // TEMPERATURE_DISPLAY_H_INCLUDED
