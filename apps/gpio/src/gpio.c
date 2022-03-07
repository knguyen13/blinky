/*! @file 		gpio.c
 *	@author 	Kevin Nguyen
 *	@date		03/04/2022
 *	@brief		gpio applications
 */

/* Includes */
#include <avr/io.h>
#include "gpio.h"
#include "hal_gpio.h"

/* Defines */

/* Typedefs */

/* Private functions */

/* Public functions */
void gpio_btn_en(void)
{
    hal_gpio_btn_en();
}

uint8_t gpio_btn_read(void)
{
    return hal_gpio_btn_read();
}

void gpio_led_en(void)
{
    hal_gpio_led_en();
}

void gpio_led_config(gpio_led_t led_config)
{
    switch (led_config.num)
    {
    case GPIO_LED_D2:
        hal_gpio_led_out(0xF8 + led_config.color, 0xFF);
        break;
    case GPIO_LED_D3:
        hal_gpio_led_out((led_config.color << 3) + 0x07, 0xFF);
        break;
    case GPIO_LED_D4:
        hal_gpio_led_out(0xFF, led_config.color);
        break;
    case GPIO_LED_ALL:
        hal_gpio_led_out((led_config.color << 3) + led_config.color, led_config.color);
        break;
    default:
        hal_gpio_led_out(0xFF, 0xFF);
        break;
    }
}
