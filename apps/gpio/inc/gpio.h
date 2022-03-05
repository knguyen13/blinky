/*! @file 		gpio.h
 *	@author 	Kevin Nguyen
 *	@date		03/04/2022
 *	@brief		gpio applications
 */

#ifndef _GPIO_H_
#define _GPIO_H_

/* Includes */
#include <stdint.h>

/*! @defgroup APPS_GPIO */
/*! @{ */

/* Defines */

/* Typedefs */

/*!
 * @brief led color combinations
 */
typedef enum
{
	// GPIO_LED_WHITE = 0b000,
	GPIO_LED_CYAN 	= 0b001,		/*!< cyan = blue + green */
	// GPIO_LED_PURPLE = 0b010,
	GPIO_LED_BLUE 	= 0b011,		/*!< blue */
	// GPIO_LED_YELLOW = 0b100,
	GPIO_LED_GREEN 	= 0b101,		/*!< green */
	GPIO_LED_RED 	= 0b110,		/*!< red */
	GPIO_LED_OFF 	= 0b111			/*!< none */
} gpio_led_color_e;

/*!
 * @brief led numbers
 */
typedef enum
{
	GPIO_LED_D4,	/*!< */
	GPIO_LED_D3,	/*!< */
	GPIO_LED_D2,	/*!< */
	GPIO_LED_ALL	/*!< */
} gpio_led_no_e;

/*!
 * @brief button combinations
 */
typedef enum
{
	GPIO_BTN_ALL	= 0b000,	/*!< */
	GPIO_BTN_SW45	= 0b001,	/*!< */
	GPIO_BTN_SW35	= 0b010,	/*!< */
	GPIO_BTN_SW5	= 0b011,	/*!< */
	GPIO_BTN_SW34	= 0b100,	/*!< */
	GPIO_BTN_SW4	= 0b101,	/*!< */
	GPIO_BTN_SW3	= 0b110,	/*!< */
	GPIO_BTN_NONE	= 0b111		/*!< */
} gpio_btn_no_e;

/*!
 * @brief led structure
 */
typedef struct
{
	gpio_led_no_e num;			/*!< */
	gpio_led_color_e color;		/*!< */
} gpio_led_t;

/* Private functions */

/* Public functions */

/*!
 * @brief enables gpio for buttons
 * 
 * @return none
 */
void gpio_btn_en(void);

/*!
 * @brief reads button input
 * 
 * @return none
 */
uint8_t gpio_btn_read(void);

/*!
 * @brief enables gpio for led
 * 
 * @return none
 */
void gpio_led_en(void);

/*!
 * @brief configure leds 
 * 
 * @param[in] led_config - led configuration settings
 * 
 * @return none
 */
void gpio_led_config(gpio_led_t led_config);

/*! @} */

#endif /* _GPIO_H_ */