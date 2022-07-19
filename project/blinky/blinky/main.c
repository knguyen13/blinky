/*
 * blinky.c
 *
 * Created: 7/19/2022 1:34:43 PM
 * Author : knguyen
 */ 

#include <avr/io.h>
#include "gpio.h"

int main(void)
{
	gpio_led_en();
	gpio_led_t settings = {GPIO_LED_ALL, GPIO_LED_BLUE};
	gpio_led_config(settings);
    /* Replace with your application code */
    while (1) 
    {
    }
}

