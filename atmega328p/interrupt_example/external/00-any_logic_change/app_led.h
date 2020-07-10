#ifndef __APP_LED__H
#define __APP_LED__H

/*
    void app_led_init(void)
    Define uma porta (D0) do atmega328p como saída e manda piscar rapidamente
*/
void app_led_init(void);

/*
    void app_led_loop(void)
    Manda um led alternar de estado usando delay
*/
void app_led_loop(void);

/*
    void app_led_swap(void)
    Manda um led alternar de estado usando delay
*/
void app_led_swap(void);
#endif