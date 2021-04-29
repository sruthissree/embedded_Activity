/*
 */

#include "seat_occupancy_heater_on.h"
#include "read_temp.h"
#include "generate_pwm.h"

int main(void)
{

    uint8_t temp_in_cel=0,seat_occupied=0;

    while(1)
    {
        seat_occupied = seat_occ_heater_on();

        if(seat_occupied){

                temp_in_cel = read_ADC();

                generate_pwm_temp(temp_in_cel);
        }

    }

    return 0;
}
