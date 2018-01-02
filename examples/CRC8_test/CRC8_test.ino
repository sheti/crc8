#include <CRC8.h>

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  byte[] m = {1, 2, 3, 4}
  byte crc8sum = crc8(m, 4);
}
