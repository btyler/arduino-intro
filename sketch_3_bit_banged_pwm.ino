/*
 * Bit-banging Pulse Width Modulation Example
 * 2019 Ben Tyler
 */
const int pin = 7;
const int period = 1000; // period is 1000us, so frequency is 1kHz
const int onTime = 200;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  digitalWrite(pin, HIGH);
  delayMicroseconds(onTime);
  digitalWrite(pin, LOW);
  delayMicroseconds(period - onTime);
} /* end */
