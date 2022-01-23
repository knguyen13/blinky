/* Includes */
#ifndef _GPIO_H_
#define _GPIO_H_

#include <stdint.h>

/* Defines */

/* Typedefs */
typedef enum
{
	// GPIO_LED_WHITE = 0b000,
	GPIO_LED_CYAN = 0b001,
	// GPIO_LED_PURPLE = 0b010,
	GPIO_LED_BLUE = 0b011,
	// GPIO_LED_YELLOW = 0b100,
	GPIO_LED_GREEN = 0b101,
	GPIO_LED_RED = 0b110,
	GPIO_LED_OFF = 0b111
} gpio_led_color_e;

typedef enum
{
	GPIO_LED_D4,
	GPIO_LED_D3,
	GPIO_LED_D2,
	GPIO_LED_ALL
} gpio_led_no_e;

typedef enum
{
	GPIO_BTN_ALL	= 0b000,
	GPIO_BTN_SW45	= 0b001,
	GPIO_BTN_SW35	= 0b010,
	GPIO_BTN_SW5	= 0b011,
	GPIO_BTN_SW34	= 0b100,
	GPIO_BTN_SW4	= 0b101,
	GPIO_BTN_SW3	= 0b110,
	GPIO_BTN_NONE	= 0b111
} gpio_btn_no_e;

typedef struct
{
	gpio_led_no_e num;
	gpio_led_color_e color;
} gpio_led_t;

/* Private functions */

/* Public functions */

void gpio_btn_en(void);

uint8_t gpio_btn_read(void);

void gpio_led_en(void);

void gpio_led_config(gpio_led_t led_config);

#endif /* _GPIO_H_ */