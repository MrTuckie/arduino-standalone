// Blink example

#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>
void main (){
	DDRD |= (1<<DDD0); // D0 -> Pin 2 (Digital 0)
	while(1){
		PORTD ^= (1<<PORTD0);
		_delay_ms(100);
	}
}
