// Take a look at qeewiki External interrupt topic

#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include "app_led.h"
#include "app_button.h"

int main(void)
{
    app_led_init();
    app_button_init();

    while(1){
        //app_led_loop();
    }
}
