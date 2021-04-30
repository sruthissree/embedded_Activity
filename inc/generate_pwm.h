#ifndef GENERATE_PWM_H_INCLUDED
#define GENERATE_PWM_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

void generate_pwm_temp(uint8_t);

void set_duty_cycle(uint16_t);

void InitPWM();

#endif // GENERATE_PWM_H_INCLUDED
