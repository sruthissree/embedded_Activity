# Activity 1 Seat occupied and Heater ON

|SWITCH 1|ON|OFF|
|:--:|:--:|:--|
|SWITCH 2 ON|:--:|LED ON|LED OFF|
|SWITCH 2 OFF|:--:|LED OFF|LED OFF|

## Code 
```
	while(1)
    {
        if(PINB & (1<<PINB0)){                       //if switch1 is ON
            if(PINB & (1<<PINB1)){                   //if switch2 is ON
                PORTB |= (1<<PINB2);                 //LED made ON
            }
            else{                                    //switch1 is ON and switch2 is OFF
                PORTB &= ~(1<<PINB2);                //LED made OFF
	    }
        }

        else{                                        //switch1 is OFF
            PORTB &= ~(1<<PINB2);                    //LED made OFF
        }
        _delay_ms(1000);
    }
```
