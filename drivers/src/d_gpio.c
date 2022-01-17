/* Includes */
#include <avr/io.h>
#include "d_gpio.h"
/* Defines */

/* Typedefs */

/* Private functions */

/* Public functions */
void d_gpio_init(d_gpio_port_t port)
{
    switch(port.port_no)
	{
		case D_GPIO_PORTB:
			if (port.data_direction)
			{
				DDRB |= (1 << port.pin_no);
			}
			else
			{
				DDRB &= (0 << port.pin_no);
			}
			PORTB |= (1 << port.pin_no);
			break;

		case D_GPIO_PORTC:
			if (port.data_direction)
			{
				DDRC |= (1 << port.pin_no);
			}
			else
			{
				DDRC &= (0 << port.pin_no);
			}
			PORTC |= (1 << port.pin_no);
			break;

		case D_GPIO_PORTD:
			if (port.data_direction)
			{
				DDRD |= (1 << port.pin_no);
			}
			else
			{
				DDRD &= (0 << port.pin_no);
			}
			PORTD |= (1 << port.pin_no);
			break;

		default:

			break;
	}
}