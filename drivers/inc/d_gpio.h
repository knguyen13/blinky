/* Includes */
#ifndef _DRIVERS_GPIO_H_
#define _DRIVERS_GPIO_H_

/* Defines */

/* Typedefs */
typedef enum
{
	D_GPIO_PORTB,
	D_GPIO_PORTC,
	D_GPIO_PORTD
} d_gpio_port_e;

typedef enum
{
	D_GPIO_DD_IN,
	D_GPIO_DD_OUT
} d_gpio_dd_e;

typedef struct
{
	d_gpio_port_e port_no;
	d_gpio_dd_e data_direction;
	uint8_t pin_no;
} d_gpio_port_t;

/* Private functions */

/* Public functions */
void d_gpio_init(d_gpio_port_t port);

#endif /* _DRIVERS_GPIO_H_ */