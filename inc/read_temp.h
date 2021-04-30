/**
 * @file read_temp.h
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief header file to read the ADC and get the temperature values from the digital value
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef READ_TEMP_H_INCLUDED
#define READ_TEMP_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

uint8_t read_ADC();

uint16_t get_digital_value(uint8_t);

void initialise_ADC();

#endif // READ_TEMP_H_INCLUDED
