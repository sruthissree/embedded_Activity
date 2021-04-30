/**
 * @file temperature_display.h
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief header file to display the temperaturein the Serial Monitor
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef TEMPERATURE_DISPLAY_H_INCLUDED
#define TEMPERATURE_DISPLAY_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

void display_temp(uint8_t);

void USARTInit(uint16_t);

void USARTWriteChar(char);

char int_to_char(char);

#endif // TEMPERATURE_DISPLAY_H_INCLUDED
