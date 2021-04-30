/**
 * @file temperature_display.c
 * @author Sruthissree R (sruthissreerangha2000@gmail.com)
 * @brief Source file to display the temperature in the Serial Monitor for a given temperature
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "temperature_display.h"

/**
 * @brief called function to display temperature in Celsius
 * 
 * @param temp 
 */
void display_temp(uint8_t temp){
    USARTInit(103);
    uint8_t i;
    char arr[2];
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

/**
 * @brief function to initialise USART
 * 
 * @param ubrr 
 */
void USARTInit(uint16_t ubrr){
    UBRR0L = ubrr;
    UBRR0H = (ubrr >> 8);
    UCSR0C = (1 << UMSEL00) | (1 << UCSZ01) | (1 << UCSZ00);

    UCSR0B = (1 << RXEN0)|(1 << TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

/**
 * @brief function to write character into the register
 * 
 * @param ch 
 */
void USARTWriteChar(char ch){
    while(!(UCSR0A & (1 << UDRE0)));
    UDR0=ch;
}

/**
 * @brief function to obtain ASCII value for a single digit number
 * 
 * @param ch 
 * @return char 
 */
char int_to_char(char ch){
    return ch+48;
}
