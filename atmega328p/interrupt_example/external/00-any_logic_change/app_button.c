#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "app_led.h"

// This is probably not the best way to do it, but looks nice for now.

static void app_button_interrupt(void){
    EICRA |= (1 << ISC00);      // Low level makes the interrupt (check datasheet or qee Wiki)
    EIMSK |= (1 << INT0);       // Turns on INT0
    sei();                      // turn on interrupts

}

ISR (INT0_vect)
{
    app_led_swap();
}

void app_button_init(void){
    DDRD &= ~(1 << DDD2);       // Clear the PD2 pin
    // PD2 (PCINT0 pin) is now an input
    PORTD |= (1 << PORTD2);     // turn On the Pull-up
    // PD2 is now an input with pull-up enabled
    app_button_interrupt();
}

