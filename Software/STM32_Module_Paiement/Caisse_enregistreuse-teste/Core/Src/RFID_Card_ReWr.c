/*
 * RFID_Card_ReWr.c
 *
 *  Created on: Oct 20, 2025
 *      Author: garbe
 */
#include "RFID_Card_ReWr.h"

static	  uint8_t buff[255];
static	  uint8_t uid[MIFARE_UID_MAX_LENGTH];
static	  uint8_t key_a[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
static	  uint32_t pn532_error = PN532_ERROR_NONE;
static	  int32_t uid_len = 0;

PN532 pn532;

int RFID_init()
{
	PN532_I2C_Init(&pn532);
	PN532_GetFirmwareVersion(&pn532, buff);
	if (PN532_GetFirmwareVersion(&pn532, buff) == PN532_STATUS_OK)
	{
		printf("Found PN532 with firmware version: %d.%d\r\n", buff[1], buff[2]);
	}
	else
	{
		return 0;
	}
	PN532_SamConfiguration(&pn532);
	printf("Waiting for RFID/NFC card...\r\n");
	return 1;
}

int RFID_Get_UID_Card()
{
	// Check if a card is available to read
	//ajouter gestion erreur avec time out peut être
	uid_len = PN532_ReadPassiveTarget(&pn532, uid, PN532_MIFARE_ISO14443A, 1000);
	if (uid_len == PN532_STATUS_ERROR) {
		printf(".");
	}
	else
	{
		printf("Found card with UID: ");
		for (uint8_t i = 0; i < uid_len; i++)
		{
			printf("%02x ", uid[i]);
		}
		printf("\r\n");
		return 1;
	}
	return 1;
}

int RFID_Get_Block_Information()
{
	printf("To write block 6...\r\n");
	pn532_error = PN532_MifareClassicAuthenticateBlock(&pn532, uid, uid_len,
			6, MIFARE_CMD_AUTH_A, key_a);
	if (pn532_error)
	{
		printf("Error: 0x%02x\r\n", pn532_error);
		return 0;
	}
	// Read the data from block 6
	for (uint8_t i = 0; i < 16; i++)
	{
		buff[i] = 0x00;
	}
	pn532_error = PN532_MifareClassicReadBlock(&pn532, buff, 5);
	printf("Data read back: ");
	for (uint8_t i = 0; i < 16; i++)
	{
		printf("%02x ", buff[i]);
	}
	printf("\r\n");
	return 1;

}
