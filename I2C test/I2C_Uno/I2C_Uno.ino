
#include <Wire.h>



int Uno = 101;
int Mega = 102;

byte x = 0;






void setup() {
  Serial.begin(115200);
  Wire.begin(Uno); // join i2c bus (address optional for master)
  Serial.println("Boot done");
}



void loop() {
  Wire.beginTransmission(Mega); // transmit to device #102
  Wire.write(x);              // sends one byte
  Wire.endTransmission();    // stop transmitting

  x++;



  Wire.requestFrom(Mega, 6);    // request 6 bytes from slave device #2

  while(Wire.available())    // slave may send less than requested
  { 
    int c = Wire.read();    // receive a byte as character
    Serial.println(c);         // print the character
  }











  
  delay(500);
}
