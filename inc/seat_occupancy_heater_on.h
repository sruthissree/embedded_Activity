#ifndef SEAT_OCCUPANCY_HEATER_ON_H_INCLUDED
#define SEAT_OCCUPANCY_HEATER_ON_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL 
#define SWITCH1 PINB0
#define SWITCH2 PINB1
#define LED PINB2

void seat_occ_heater_on();

void init_ip_and_op();

#endif // SEAT_OCCUPANCY_HEATER_ON_H_INCLUDED
