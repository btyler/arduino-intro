/*
 * LCD demo with LiquidCrystal library
 * 2019 Ben Tyler
 * See reference: https://www.arduino.cc/en/Reference/LiquidCrystal
 * This sketch is for 4-bit mode.
 */
 
#include <Wire.h> 
#include <LiquidCrystal.h>

/* 1 */
const int rs = 13;
const int enable = 12;
const int d4 = 11;
const int d5 = 10;
const int d6 = 9;
const int d7 = 8;

LiquidCrystal lcd(rs, enable, d4, d5, d6, d7);

void setup() {
 lcd.begin();
 lcd.print("I love Arduino");
}

void loop() {}
/* end */
