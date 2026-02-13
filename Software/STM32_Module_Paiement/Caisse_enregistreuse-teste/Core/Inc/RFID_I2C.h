/*
 * RFID_I2C.h
 *
 *  Created on: Oct 20, 2025
 *      Author: garbe
 */

#ifndef INC_RFID_I2C_H_
#define INC_RFID_I2C_H_

#include "pn532.h"

void PN532_Init(PN532* dev);
int PN532_Reset(void);
void PN532_Log(const char* log);

int PN532_SPI_ReadData(uint8_t* data, uint16_t count);
int PN532_SPI_WriteData(uint8_t *data, uint16_t count);
bool PN532_SPI_WaitReady(uint32_t timeout);
int PN532_SPI_Wakeup(void);
void PN532_SPI_Init(PN532* dev);

int PN532_I2C_ReadData(uint8_t* data, uint16_t count);
int PN532_I2C_WriteData(uint8_t *data, uint16_t count);
bool PN532_I2C_WaitReady(uint32_t timeout);
int PN532_I2C_Wakeup(void);
void PN532_I2C_Init(PN532* dev);

#endif /* INC_RFID_I2C_H_ */
