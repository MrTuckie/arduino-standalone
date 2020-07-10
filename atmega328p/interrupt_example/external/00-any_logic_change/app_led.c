#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>


void app_led_init(void){
    DDRD |= (1<<DDD0); // D0 -> Pin 2 (Digital 0) (LED)
    DDRD |= (1<<DDD1); 
}

void app_led_loop(void){
    PORTD ^= (1<<PORTD0);
    _delay_ms(1000);
    PORTD ^= (1<<PORTD0);
    _delay_ms(1000);
    
}

void app_led_swap(void){
	PORTD ^= (1<<PORTD1);
	_delay_ms(100);
}