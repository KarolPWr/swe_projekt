/*
 * uart_msg.h
 *
 *  Created on: Aug 11, 2019
 *      Author: Karol
 */

#ifndef UART_MSG_H_
#define UART_MSG_H_


extern UART_HandleTypeDef huart2;

// Control types for UART. Not used right now
typedef enum
{
  UART_OK       = 0x00U,
  UART_ERROR    = 0x01U,
  UART_BUSY     = 0x02U,
  UART_TIMEOUT  = 0x03
} UART_Print_Status;


void my_print(uint8_t *string);

void debug_printf(uint8_t *string, ...);

uint8_t *convert(uint8_t num, uint8_t base);

HAL_StatusTypeDef my_print_char(uint8_t *character);



#endif /* UART_MSG_H_ */
