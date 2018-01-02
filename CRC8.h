#ifndef CRC8_h
#define CRC8_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

unsigned char crc8(unsigned char *pcBlock, unsigned int len);

#endif