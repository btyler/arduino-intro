/*
 * I2C Scanner
 * 2019 Ben Tyler
*/

/* 1 */
#include <Wire.h> 

/* 2 */
void setup() {
  int deviceCount = 0;
  Serial.begin(9600);
  Wire.begin();
  while (!Serial);
  Serial.println("Beginning scan");
  
/* 3 */
  for(int address = 1; address < 127; address++ ) {
    Wire.beginTransmission(address);
    int result = Wire.endTransmission();
    
/* 4 */ 
    if (result == 0) {
      Serial.print("I2C device at 0x");
      Serial.print(address, HEX);
      deviceCount++;
    }   
  }
  
/* 5 */
  if (deviceCount == 0) {
    Serial.println("No I2C devices found\n");
  }
}

/* 6 */
void loop() {}  //empty loop
/* end */
