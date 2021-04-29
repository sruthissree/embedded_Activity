#ifndef SEAT_OCCUPANCY_HEATER_ON_H_INCLUDED
#define SEAT_OCCUPANCY_HEATER_ON_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>

#define SWITCH1 PINB0
#define SWITCH2 PIND7
#define LED PINB2

uint8_t seat_occ_heater_on();

void init_ip_and_op();

#endif // SEAT_OCCUPANCY_HEATER_ON_H_INCLUDED
