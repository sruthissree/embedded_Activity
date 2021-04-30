#include "generate_pwm.h"


void InitPWM(){
	TCCR1A |= (1 << COM1A1) | (1 << WGM10) | (1 << WGM11);
    TCCR1B |= (1 << WGM12) | (1 << CS10) | (1 << CS11);
    DDRB |= (1 << PINB1);
}

void set_duty_cycle(uint16_t dutycycle_value){
    OCR1A = dutycycle_value;
}

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


