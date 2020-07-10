// Take a look at qeewiki External interrupt topic

#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>


int main(void)
{
    DDRD &= ~(1 << DDD2);     // Clear the PD2 pin
    // PD2 (PCINT0 pin) is now an input

    PORTD |= (1 << PORTD2);    // turn On the Pull-up
    // PD2 is now an input with pull-up enabled

    DDRD |= (1<<DDD0); // D0 -> Pin 2 (Digital 0) (LED)

    EICRA |= (1 << ISC10);    // Falling Edge
    EIMSK |= (1 << INT0);     // Turns on INT0

    sei();                    // turn on interrupts

    while(1)
    {
        //
    }
}



ISR (INT0_vect)
{
    PORTD ^= (1<<PORTD0);
		_delay_ms(1000);
}