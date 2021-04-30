/**
 * @file read_temp.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief source file to obtain the temperature from the ADC
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "read_temp.h"

/**
 * @brief function to initialise ADC
 * 
 */
void initialise_ADC(){
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN) | (7<<ADPS0);
}

/**
 * @brief Get the digital value from ADC
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t get_digital_value(uint8_t ch){
    ADMUX &= 0xf8;
    ch &= 0b00000111;
    ADMUX |= ch;
    ADCSRA |= (1<<ADSC);
    while(!(ADCSRA & (1 << ADIF)));
    ADCSRA |= (1 << ADIF);
    return (ADC);
}

/**
 * @brief map the temperature in Celsius for the obtained digital value from ADC
 * 
 * @return uint8_t 
 */
uint8_t read_ADC(){
    uint16_t digital_value=0; uint8_t temp=0;
    
    initialise_ADC();
    digital_value = get_digital_value(0);
    
	if(digital_value<=200){
        temp = 20;
    }
    else if(digital_value<=500){
        temp = 25;
    }
    else if(digital_value<=700){
        temp = 29;
    }
    else if (digital_value<=1024){
        temp = 33;
    }
    return temp;
}
