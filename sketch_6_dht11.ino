/*
 * DHT11 Demo
 * 2019 Ben Tyler
 */
 
#include <SimpleDHT.h>

/* 1 */
byte temperature = 0;
byte humidity = 0;
const int pin = 7;
SimpleDHT11 dht11;

void setup() {
  Serial.begin(9600);
}

void loop() {
/* 2 */
  if (dht11.read(pin, &temperature, &humidity, NULL)) {
    Serial.print("Error reading DHT11.");
    return;
  }
  
/* 3 */  
  Serial.print(String(temperature) + " *C, "); 
  Serial.print(String(humidity) + " %");
  delay(5000);
} /* end */
