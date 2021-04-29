/*
 */

#include "seat_occupancy_heater_on.h"
#include "read_temp.h"
#include "generate_pwm.h"

int main(void)
{

    uint8_t temp_in_cel=0,occupancy=0;

    while(1)
    {
        occupancy = seat_occ_heater_on();

        if(occupancy){

                temp_in_cel = read_ADC();

                generate_pwm_temp(temp_in_cel);
        }

    }

    return 0;
}
