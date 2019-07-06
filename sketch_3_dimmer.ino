/*
 * Dimmer using Analog Input and PWM
 * 2019 Ben Tyler
 */

/* 1 */
const int led = 11;
const int potentiometer = A0;
int reading = 0;
int pwm = 0;

void setup() {
  pinMode(led, OUTPUT);
}

/* 2 */
void loop() {
  reading = analogRead(potentiometer);
  Serial.println(reading);
  
/* 3 */
  pwm = map(reading, 0, 1023, 0, 255);
  analogWrite(led, pwm);
  delay(20);
}/* end */
