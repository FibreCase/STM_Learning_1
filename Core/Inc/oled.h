//
// Created by fibre on 2024/1/7.
//

#ifndef OLED_H
#define OLED_H

#include "main.h"
#include "i2c.h"

#endif //OLED_H

void OLED_SendCMD(uint8_t cmd);
void OLED_Init();
void OLED_SetBlack();
void OLED_SetPixel(uint8_t x,uint8_t y, uint8_t status, uint8_t GRAM[8][128]);
void OLED_ShowFrame(uint8_t GRAM[8][128]);