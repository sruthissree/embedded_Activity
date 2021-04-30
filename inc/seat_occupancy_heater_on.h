/**
 * @file seat_occupancy_heater_on.h
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief header file to check whether the seat is occupied and heater turned ON
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
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
