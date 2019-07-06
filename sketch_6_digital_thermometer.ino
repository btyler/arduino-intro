/*
 * Digital Thermometer with LCD
 * 2019 Ben Tyler
 */
 
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <SimpleDHT.h>

byte temperature = 0;
byte humidity = 0;
const int pin = 7;
SimpleDHT11 dht11;
LiquidCrystal_I2C lcd(0x27,16,2); 

void setup() {
 Serial.begin(9600);
 lcd.init();
 lcd.backlight();
}

void loop() {
  if (dht11.read(pin, &temperature, &humidity, NULL)) {
    Serial.print("Error reading DHT11.");
    return;
  }
  string text = String(temperature) + " *C, \n" + String(humidity) + " %");
  lcd.print(text);
} /* end */
