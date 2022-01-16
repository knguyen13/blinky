/* Includes */
#include <stdint.h>
#include <avr/io.h>
#include "gpio_api.h"
/* Defines */

/* Typedefs */

/* Private functions */

/* Public functions */

/* Enable PB0, PB1, PB2, PB7 as digital inputs with pull-up resistors */
void hal_gpio_btn_en(void)
{
	gpio_port_t portb = {GPIO_PORTB, GPIO_DD_IN, 0};
	uint8_t pin[] = {0, 1, 2, 7};
	for (int i = 0; i <= sizeof(pin)/sizeof(pin[0]) - 1; i++)
	{
		portb.pin_no = pin[i];
		gpio_init(portb);
	}
}

/* Read button input */
uint8_t hal_gpio_btn_read(void)
{
	return (PINB & 0x07);
}