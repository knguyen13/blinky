/*! @file 		d_gpio.h
 *	@author 	Kevin Nguyen
 *	@date		03/04/2022
 *	@brief		gpio drivers
 */

#ifndef _DRIVERS_GPIO_H_
#define _DRIVERS_GPIO_H_

/* Includes */

/*! @defgroup DRIVERS_GPIO */
/*! @{ */

/* Defines */

/* Typedefs */

/*!
 * @brief gpio port numbers
 */
typedef enum
{
    D_GPIO_PORTB,	/*!< */
    D_GPIO_PORTC,	/*!< */
    D_GPIO_PORTD	/*!< */
} d_gpio_port_e;

/*!
 * @brief gpio data direction
 */
typedef enum
{
    D_GPIO_DD_IN,	/*!< */
    D_GPIO_DD_OUT	/*!< */
} d_gpio_dd_e;

/*!
 * @brief gpio struct
 */
typedef struct
{
    d_gpio_port_e port_no;			/*!< */
    d_gpio_dd_e data_direction;		/*!< */
    uint8_t pin_no;					/*!< */
} d_gpio_port_t;

/* Private functions */

/* Public functions */

/*!
 * @brief initializes the gpios
 *
 * @param[in] port - port information
 *
 * @return none
 */
void d_gpio_init(d_gpio_port_t port);

/*! @} */

#endif /* _DRIVERS_GPIO_H_ */