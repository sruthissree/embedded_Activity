/**
 * @file generate_pwm.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief source file to generate a PWM signal at PORT B for a given temperature
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "generate_pwm.h"

/**
 * @brief function to intialise the Data Direction Register for PORT B and the Timer1 Registers
 * 
 */
void InitPWM(){
	TCCR1A |= (1 << COM1A1) | (1 << WGM10) | (1 << WGM11);
    TCCR1B |= (1 << WGM12) | (1 << CS10) | (1 << CS11);
    DDRB |= (1 << PINB1);
}

/**
 * @brief function to Set the duty cycle for the PWM signal
 * 
 * @param dutycycle_value 
 */
void set_duty_cycle(uint16_t dutycycle_value){
    OCR1A = dutycycle_value;
}

/**
 * @brief the called function to generate PWM
 * 
 * @param temp 
 */
void generate_pwm_temp(uint8_t temp){

    InitPWM();
    
    if(temp==20){
        set_duty_cycle(205);
    }
    else if(temp==25){
        set_duty_cycle(410);
    }
    else if(temp==29){
        set_duty_cycle(717);
    }
    else if(temp==33){
        set_duty_cycle(972);
    }
    _delay_ms(200);
}


