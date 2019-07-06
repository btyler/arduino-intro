/*
 * 1602 LCD Demo
 * 2019 Ben Tyler
 */
 
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

/* 1 */
LiquidCrystal_I2C lcd(0x27,16,2); 

void setup() {
 Serial.begin(9600);
 lcd.init();
 lcd.backlight();
 lcd.print("I love Arduino!");
}

void loop() {}
/* end */
