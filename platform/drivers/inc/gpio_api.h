/* Includes */
#ifndef _GPIO_API_H_
#define _GPIO_API_H_

/* Defines */

/* Typedefs */
typedef enum
{
	GPIO_PORTB,
	GPIO_PORTC,
	GPIO_PORTD
} gpio_port_e;

typedef enum
{
	GPIO_DD_IN,
	GPIO_DD_OUT
} gpio_dd_e;

typedef struct
{
	gpio_port_e port_no;
	gpio_dd_e data_direction;
	uint8_t pin_no;
} gpio_port_t;

/* Private functions */

/* Public functions */
void gpio_init(gpio_port_t port);

#endif /* _GPIO_API_H_ */