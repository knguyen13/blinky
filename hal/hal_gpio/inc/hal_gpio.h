/*! @file 		hal_gpio.h
 *	@author 	Kevin Nguyen
 *	@date		03/04/2022
 *	@brief		gpio hw abstraction
 */

#ifndef _HAL_GPIO_H_
#define _HAL_GPIO_H_

/* Includes */

/*! @defgroup HAL_GPIO */
/*! @{ */

/* Defines */

/* Typedefs */

/* Private functions */

/* Public functions */

/*!
 * @brief enable PB0, PB1, PB2, PB7 as digital inputs with pull-up resistors 
 * 
 * @return none
 */
void hal_gpio_btn_en(void);

/*!
 * @brief read button input
 * 
 * @return none
 */
uint8_t hal_gpio_btn_read(void);

/*!
 * @brief enable PC0-PC5, PD0-PD2 as digital outputs
 * 
 * @return none
 */
void hal_gpio_led_en(void);

/*!
 * @brief turn on led
 * 
 * @param[in] colorc - portc color
 * @param[in] colord - portd color
 * 
 * @return none
 */
void hal_gpio_led_out(uint8_t colorc, uint8_t colord);

/*! @} */

#endif /* _HAL_GPIO_H_ */
