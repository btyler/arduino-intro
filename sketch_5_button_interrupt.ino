/*
 * Detect Button Press with Interrupt
 * 2019 Ben Tyler
*/

/* 1 */
const int interruptPin = 2;
int ledState = LOW;        	// the current state of the output pin

/* 2 */
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(interruptPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin), handler, HIGH);
}

/* 3 */
loop() {
  digitalWrite(LED_BUILTIN, ledState);
}

/* 4 */
void handler() {
  ledState = !ledState;
} /* end */
