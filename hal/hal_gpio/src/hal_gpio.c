/*! @file 		hal_gpio.c
 *	@author 	Kevin Nguyen
 *	@date		03/04/2022
 *	@brief		gpio hw abstraction
 */

/* Includes */
#include <stdint.h>
#include <avr/io.h>
#include "d_gpio.h"

/* Defines */

/* Typedefs */

/* Private functions */

/* Public functions */
void hal_gpio_btn_en(void)
{
	d_gpio_port_t portb = {D_GPIO_PORTB, D_GPIO_DD_IN, 0};
	uint8_t pin[] = {0, 1, 2, 7};
	for (int i = 0; i <= sizeof(pin)/sizeof(pin[0]) - 1; i++)
	{
		portb.pin_no = pin[i];
		d_gpio_init(portb);
	}
}

uint8_t hal_gpio_btn_read(void)
{
	return (PINB & 0x07);
}

void hal_gpio_led_en(void)
{
	d_gpio_port_t portc = {D_GPIO_PORTC, D_GPIO_DD_OUT, 0};
	uint8_t pin[] = {0, 1, 2, 3, 4, 5};
	for (int i = 0; i <= sizeof(pin)/sizeof(pin[0]) - 1; i++)
	{
		portc.pin_no = pin[i];
		d_gpio_init(portc);
	}

	d_gpio_port_t portd = {D_GPIO_PORTD, D_GPIO_DD_OUT, 0};
    uint8_t pin2[] = {0, 1, 2};
	for (int i = 0; i <= sizeof(pin2)/sizeof(pin2[0]) - 1; i++)
	{
		portd.pin_no = pin2[i];
		d_gpio_init(portd);
	}
}

void hal_gpio_led_out(uint8_t colorc, uint8_t colord)
{
	PORTC = colorc;
	PORTD = colord;
}

