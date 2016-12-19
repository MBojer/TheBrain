
#include <Wire.h>

void setup() {
  Wire.begin(102); // join i2c bus (address optional for master)
}

byte x = 0;

void loop() {
  Wire.beginTransmission(101); // transmit to device #101
  Wire.write(x);              // sends one byte
  Wire.endTransmission();    // stop transmitting

  x++;
  delay(500);
}
