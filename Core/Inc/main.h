/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "oled.h"

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
void bee(int time);
void staring_red(int status);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LDT_Pin GPIO_PIN_1
#define LDT_GPIO_Port GPIOA
#define LDT_EXTI_IRQn EXTI1_IRQn
#define LEDR_Pin GPIO_PIN_4
#define LEDR_GPIO_Port GPIOA
#define LEDY_Pin GPIO_PIN_5
#define LEDY_GPIO_Port GPIOA
#define LEDG_Pin GPIO_PIN_6
#define LEDG_GPIO_Port GPIOA
#define BEE_Pin GPIO_PIN_7
#define BEE_GPIO_Port GPIOA
#define SWT_Pin GPIO_PIN_15
#define SWT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
