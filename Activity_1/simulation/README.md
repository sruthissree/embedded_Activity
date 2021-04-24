# Blinky Project In Action

|ON|OFF|
|:--:|:--:|

## Code 
```
	while(1)
    {
        if(PINB & (1<<PINB0)){
            if(PINB & (1<<PINB1)){
                PORTB |= (1<<PINB2);
            }
            else{
                PORTB &= ~(1<<PINB2);
            }
        }

        else{
            PORTB &= ~(1<<PINB2);
        }
        _delay_ms(1000);
    }
```