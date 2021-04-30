#include "temperature_display.h"

void display_temp(uint8_t temp){
    USARTInit(103);
    uint8_t i;
    char ch='1',arr[2];
    arr[1] = int_to_char(temp%10);
    arr[0] = int_to_char(temp/10);
    char *s=" degree Celsius\n";

    for(i=0;i<2;i++){
        USARTWriteChar(arr[i]);
    }
    for(i=0;s[i]!='\0';i++){
        USARTWriteChar(s[i]);
    }
    _delay_ms(2000);
}

void USARTInit(uint16_t ubrr){
    UBRR0L = ubrr;
    UBRR0H = (ubrr >> 8);
    UCSR0C = (1 << UMSEL00) | (1 << UCSZ01) | (1 << UCSZ00);

    UCSR0B = (1 << RXEN0)|(1 << TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

void USARTWriteChar(char ch){
    while(!(UCSR0A & (1 << UDRE0)));
    UDR0=ch;
}

char int_to_char(char ch){
    return ch+48;
}
