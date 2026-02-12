/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdint.h>
#include "pn532.h"
#include "stdio.h"
#include "string.h"
#include "RFID_I2C.h"
#include "RFID_Card_ReWr.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define green_Pin GPIO_PIN_5
#define green_GPIO_Port GPIOA
#define PN532_RST_Pin GPIO_PIN_0
#define PN532_RST_GPIO_Port GPIOB
#define PN532_REQ_Pin GPIO_PIN_1
#define PN532_REQ_GPIO_Port GPIOB
#define Row4_Pin GPIO_PIN_10
#define Row4_GPIO_Port GPIOB
#define Row1_Pin GPIO_PIN_7
#define Row1_GPIO_Port GPIOC
#define Row3_Pin GPIO_PIN_8
#define Row3_GPIO_Port GPIOA
#define Row2_Pin GPIO_PIN_9
#define Row2_GPIO_Port GPIOA
#define Col4_Pin GPIO_PIN_10
#define Col4_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define nCS_Pin GPIO_PIN_15
#define nCS_GPIO_Port GPIOA
#define IRQ_Pin GPIO_PIN_10
#define IRQ_GPIO_Port GPIOC
#define TX_BT_RX_Pin GPIO_PIN_12
#define TX_BT_RX_GPIO_Port GPIOC
#define RX_BT_TX_Pin GPIO_PIN_2
#define RX_BT_TX_GPIO_Port GPIOD
#define Col3_Pin GPIO_PIN_3
#define Col3_GPIO_Port GPIOB
#define Col1_Pin GPIO_PIN_4
#define Col1_GPIO_Port GPIOB
#define Col2_Pin GPIO_PIN_5
#define Col2_GPIO_Port GPIOB
#define RESET_Pin GPIO_PIN_7
#define RESET_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
