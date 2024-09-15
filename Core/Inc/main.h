/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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
#define CARD_STATUS_Pin GPIO_PIN_13
#define CARD_STATUS_GPIO_Port GPIOC
#define INPUT_BA_Pin GPIO_PIN_0
#define INPUT_BA_GPIO_Port GPIOC
#define INPUT_BB_Pin GPIO_PIN_1
#define INPUT_BB_GPIO_Port GPIOC
#define INPUT_BX_Pin GPIO_PIN_2
#define INPUT_BX_GPIO_Port GPIOC
#define INPUT_BY_Pin GPIO_PIN_3
#define INPUT_BY_GPIO_Port GPIOC
#define DISPLAY_DC_Pin GPIO_PIN_2
#define DISPLAY_DC_GPIO_Port GPIOA
#define DISPLAY_RST_Pin GPIO_PIN_3
#define DISPLAY_RST_GPIO_Port GPIOA
#define DISPLAY_CS_Pin GPIO_PIN_4
#define DISPLAY_CS_GPIO_Port GPIOA
#define CELL_ELE_Pin GPIO_PIN_5
#define CELL_ELE_GPIO_Port GPIOA
#define INPUT_X_Pin GPIO_PIN_6
#define INPUT_X_GPIO_Port GPIOA
#define CHARGE_OPT_Pin GPIO_PIN_7
#define CHARGE_OPT_GPIO_Port GPIOA
#define CHARGE_STATUS_Pin GPIO_PIN_4
#define CHARGE_STATUS_GPIO_Port GPIOC
#define INPUT_Z_Pin GPIO_PIN_5
#define INPUT_Z_GPIO_Port GPIOC
#define INPUT_Y_Pin GPIO_PIN_0
#define INPUT_Y_GPIO_Port GPIOB
#define INPUT_POWER_Pin GPIO_PIN_1
#define INPUT_POWER_GPIO_Port GPIOB
#define INPUT_L_Pin GPIO_PIN_2
#define INPUT_L_GPIO_Port GPIOB
#define INPUT_R_Pin GPIO_PIN_10
#define INPUT_R_GPIO_Port GPIOB
#define ESP_INT_Pin GPIO_PIN_12
#define ESP_INT_GPIO_Port GPIOB
#define TF_SCK_Pin GPIO_PIN_13
#define TF_SCK_GPIO_Port GPIOB
#define TF_MISO_Pin GPIO_PIN_14
#define TF_MISO_GPIO_Port GPIOB
#define TF_MOSI_Pin GPIO_PIN_15
#define TF_MOSI_GPIO_Port GPIOB
#define ESP_TX_Pin GPIO_PIN_6
#define ESP_TX_GPIO_Port GPIOC
#define ESP_RX_Pin GPIO_PIN_7
#define ESP_RX_GPIO_Port GPIOC
#define ESP_CS_Pin GPIO_PIN_8
#define ESP_CS_GPIO_Port GPIOC
#define CARD_SDA_Pin GPIO_PIN_9
#define CARD_SDA_GPIO_Port GPIOC
#define CARD_SCL_Pin GPIO_PIN_8
#define CARD_SCL_GPIO_Port GPIOA
#define CARD_TX_Pin GPIO_PIN_9
#define CARD_TX_GPIO_Port GPIOA
#define CARD_RX_Pin GPIO_PIN_10
#define CARD_RX_GPIO_Port GPIOA
#define DIAPLAT_LED_Pin GPIO_PIN_11
#define DIAPLAT_LED_GPIO_Port GPIOA
#define CARD_CS_Pin GPIO_PIN_12
#define CARD_CS_GPIO_Port GPIOA
#define TF_CS_Pin GPIO_PIN_15
#define TF_CS_GPIO_Port GPIOA
#define CARD_SCK_Pin GPIO_PIN_10
#define CARD_SCK_GPIO_Port GPIOC
#define CARD_MISO_Pin GPIO_PIN_11
#define CARD_MISO_GPIO_Port GPIOC
#define CARD_MOSI_Pin GPIO_PIN_12
#define CARD_MOSI_GPIO_Port GPIOC
#define INPUT_FN_Pin GPIO_PIN_2
#define INPUT_FN_GPIO_Port GPIOD
#define DISPLAY_SCK_Pin GPIO_PIN_3
#define DISPLAY_SCK_GPIO_Port GPIOB
#define DISPLAY_MISO_Pin GPIO_PIN_4
#define DISPLAY_MISO_GPIO_Port GPIOB
#define DISPLAY_MOSI_Pin GPIO_PIN_5
#define DISPLAY_MOSI_GPIO_Port GPIOB
#define TOUCH_SCL_Pin GPIO_PIN_6
#define TOUCH_SCL_GPIO_Port GPIOB
#define TOUCH_SDA_Pin GPIO_PIN_7
#define TOUCH_SDA_GPIO_Port GPIOB
#define CARD_DATA1_Pin GPIO_PIN_8
#define CARD_DATA1_GPIO_Port GPIOB
#define CARD_DATA2_Pin GPIO_PIN_9
#define CARD_DATA2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
