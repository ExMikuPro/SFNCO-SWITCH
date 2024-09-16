//
// Created by Hatsune Miku on 2024/9/16.
//

#ifndef STM32F401_T1_ADC_H
#define STM32F401_T1_ADC_H

#include "main.h"

uint16_t ADC_data[7] = {0};

void US_ADC_Init(ADC_HandleTypeDef *hadc);

void getXY(int *x, int *y);

void getTemp(int *temp);

void US_ADC_Init(ADC_HandleTypeDef *hadc) {
  HAL_ADC_Start_DMA(hadc, (uint32_t *) ADC_data, 7);
}

void getXY(int *x, int *y) {
  // ADC_Filter();
  *x = ADC_data[0];
  *y = ADC_data[1];
}


void getTemp(int *temp) {
  *temp = ADC_data[5];
}

#endif //STM32F401_T1_ADC_H
