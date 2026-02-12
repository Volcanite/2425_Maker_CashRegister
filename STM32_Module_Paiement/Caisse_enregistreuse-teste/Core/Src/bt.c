/*
 * bt.c
 *
 *  Created on: Apr 23, 2025
 *      Author: garbe
 */
#include "bt.h"

char msg[] = "Hello Pi!\r\n";

void bt_received(){

	//HAL_UART_Transmit(&huart5, (uint8_t*)msg, strlen(msg), HAL_MAX_DELAY);

	HAL_Delay(500);

	HAL_GPIO_TogglePin(green_GPIO_Port, green_Pin);

}

