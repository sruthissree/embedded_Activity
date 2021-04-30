/**
 * @file generate_pwm.h
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief header file for PWM generation for a given temperature
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef GENERATE_PWM_H_INCLUDED
#define GENERATE_PWM_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

void generate_pwm_temp(uint8_t);

void set_duty_cycle(uint16_t);

void InitPWM();

#endif // GENERATE_PWM_H_INCLUDED
