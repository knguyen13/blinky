/* Includes */
#ifndef _HAL_GPIO_H_
#define _HAL_GPIO_H_

/* Defines */

/* Typedefs */

/* Private functions */

/* Public functions */
void hal_gpio_btn_en(void);
uint8_t hal_gpio_btn_read(void);

void hal_gpio_led_en(void);
void hal_gpio_led_out(uint8_t colorc, uint8_t colord);

#endif /* _HAL_GPIO_H_ */
