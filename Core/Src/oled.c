
#include "oled.h"

#define OLED_ADDR 0x78

uint8_t CMD_INIT_Data[] = {
	0xAE,0x00,0x10,0x40,0xB0,0x81,0xFF,0xA1,0xA6,0xA8,0x3F,0xC8,0xD3,0x00,0xD5,0x80,0xD8,0x05,0xD9,0xF1,0xDA,0x12,0xD8,0x30,0x8D,0x14,0xAF
};

void OLED_SendCMD(uint8_t cmd) {
	uint8_t Send_Buffer[2];
	Send_Buffer[0] = 0x00;
	Send_Buffer[1] = cmd;
	HAL_I2C_Master_Transmit(&hi2c1, OLED_ADDR, Send_Buffer, 2, HAL_MAX_DELAY);
}

void OLED_Init() {
	for (int i = 0; i < 27; i++) {
		OLED_SendCMD(CMD_INIT_Data[i]);
	}
}

void OLED_SetBlack() {
	for (int i = 0; i < 8; i++) {
		OLED_SendCMD(0xb0 + i);
		OLED_SendCMD(0x00);
		OLED_SendCMD(0x10);
		for (int j = 0; j < 128; j++) {
			OLED_SendCMD(0x00);
		}
	}
}

void OLED_ShowFrame(uint8_t GRAM[8][128]) {
	for (int i = 0; i < 8; i++) {
		OLED_SendCMD(0xb0 + i);
		OLED_SendCMD(0x00);
		OLED_SendCMD(0x10);
		for (int j = 0; j < 128; j++) {
			OLED_SendCMD(GRAM[i][j]);
		}
	}
}

void OLED_SetPixel(uint8_t x,uint8_t y, uint8_t status, uint8_t GRAM[8][128]) {
	if (x >= 128 || y >= 64) {
		return;
	}
	if (status == 0) {
		GRAM[y / 8][x] &= ~(1 << (y % 8));
	} else {
		GRAM[y / 8][x] |= (1 << (y % 8));
	}
}
