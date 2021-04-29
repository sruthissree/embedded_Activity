/*
 */

#include "seat_occupancy_heater_on.h"
#include "read_temp.h"

int main(void)
{

    uint16_t temp_in_cel=0;

    while(1)
    {
        seat_occ_heater_on();

        temp_in_cel = read_temperature();

    }

    return 0;
}
